// Matching Locations 

//* Write a program that reads names of places and their geographical coordinates in the format name,latitude,longitude (where latitude and longitude are floating-point numbers). No two locations will have the same name. Some locations may have the same coordinates. After all locations are entered, a single line containing the '.' (dot) the character will be entered. After that, queries will be entered – the queries will either contain a name of a location, or latitude and longitude coordinates (entered as two floating point numbers separated by a single space). Print all locations that match the query in the same format that they were entered. After all queries are entered, a single line containing the '.' (dot) the character will be entered.

#include <iostream>
#include <string>
#include <list>
#include <sstream>

using namespace std;

class GeoLoc{

    
    string lat, lng;

    public:
    GeoLoc() {}
    GeoLoc(string lat_, string lng_) : lat(lat_), lng(lng_) {}

    void get(istream& istr) {
        getline(istr, lat, ',');
        getline(istr, lng, ',');
    }
    void print(ostream& ostr) {
        ostr << lat << "," << lng ;
    }

    const string & getLat(void) const { return lat; }
    const string & getLng(void) const { return lng; }
};


class Location {

    std::string name;
    GeoLoc loc;

    public:
    Location(){}
    Location(std::string name_, string lat_, string lng_) : name(name_), loc(lat_, lng_) {}
    Location(istream& istr){
        get(istr);
        loc.get(istr);
    }

    
    void get(istream& istr) {
        getline(istr, name, ',');
        loc.get(istr);
    }

    const string & getName() const { return name; }

    void print(ostream& ostr) {
        ostr << name << ",";
        loc.print(ostr);
        ostr << endl;
    }

    const GeoLoc & getLoc(void) const { return loc; }
};

int main()
{
    typedef std::list<Location> LocList;
    LocList data;

    while(true) {
        string line;
        getline(cin, line);

        if(line == ".") break;

        istringstream istr(line);
        data.push_back(Location(istr));

    }

    while(true) {
        string line;
        getline(cin, line);

        if(line == ".") break;

        bool isCity = *line.begin() > '9';

        string latt, lng;
        if(!isCity) {
            istringstream istr(line);
            istr >> latt >> lng;
        }

        LocList::iterator it = data.begin();
        while(it != data.end()) {
            if(it->getName() == line) { it->print(cout); break; }
            else {
                if(it->getLoc().getLat() == latt &&
                it->getLoc().getLng() == lng ) 
                it->print(cout);
            }
            it++;
        }
    }
    return 0;
}

/*
Sofia,42.70,23.33
New York,40.6976701,-74.2598732
SoftUni,42.70,23.33
.
Sofia
40.6976701 -74.2598732
42.70 23.33
.

OUTPUT

Sofia,42.70,23.33
New York,40.6976701,-74.2598732
Sofia,42.70,23.33
SoftUni,42.70,23.33

*/

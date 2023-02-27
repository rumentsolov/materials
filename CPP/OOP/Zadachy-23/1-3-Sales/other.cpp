#include <iostream>
#include <vector>
#include <map>
#include <iomanip>

class Sale
{
private:
    std::string _town;
    std::string _product;
    double _price;
    double _quantity;

public:
    Sale(std::string town, std::string product, double price, double quantity) :
        _town(town), _product(product), _price(price), _quantity(quantity) {}

    std::string getTown()
    {
        return this->_town;
    }

    double calcTotal()
    {
        return this->_price * this->_quantity;
    }
};

int main()
{
    typedef std::vector<Sale> Sales;
    Sales sales;

    int numOfInputs;
    std::cin >> numOfInputs;

    std::string town;
    std::string product;
    double price;
    double quantity;
    
    for (int i = 0; i < numOfInputs; ++i)
    {
        std::cin >> town >> product >> price >> quantity;
        Sale sale(town, product, price, quantity);
        sales.push_back(sale);
    }

    std::map<std::string, double> totalForEachCity;
    for (Sale sale : sales)
    {
        totalForEachCity[sale.getTown()] += sale.calcTotal();
    }

    for (const std::pair<std::string, double>& p : totalForEachCity)
    {
        std::cout << p.first << " -> " << std::fixed << std::setprecision(2) << p.second << std::endl;
    }

    return 0;
}
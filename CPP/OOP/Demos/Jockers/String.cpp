#include <iostream>
#include <cstring>
#include <string>


void commaRemover(std::string & csv);
std::string getRandomStringFromSpecialChars(const int length);

int main() {

//!  CSTRING

//? in C : char str[],  '\0' counts as an element – it affects array size

char text[16] = { 'C','+','+',' ','P','r','o','g','r','a','m','m','i','n','g','\0' };
char sameText[] = { 'C','+','+',' ','P','r','o','g','r','a','m','m','i','n','g', 0 };
char sameTextAgain[] = "C++ Programming";
char sameTextYetAgain[16] = "C++ Programming";

char text1[50] = { 'h', 'e', 'l', 'l', 'o', ',', ' ','\0' };
char text2[] = { 'w', 'o', 'r', 'l', 'd', '!', '\0' };

//? POINTER
char * result = strstr(text1, "world!"); //* Points to first found letter from line1 that is equal to "world!"

//? ARITHMETHICS
const int index = result - text1; // index of found will be equal to 7
*result = 'D'; // Dorld! instead of World! becouse points the first found letter from the string

//? CONCAT

strcat_s(text1, text2); //* Append text2 to text1 but text1 should be big enough to hold the concatenated string

//? SIZE
strlen(text2); // returns size of text2 (6)




//! STRING OBJECT

//* Strings are OBJECTS that represent sequences of characters. The standard string class provides support for such objects with an interface similar to that of a standard container of bytes, but adding features specifically designed to operate with strings of single-byte characters. The string class is an instantiation of the basic_string class template that uses char (i.e., bytes) as its character type, with its default char_traits and allocator types (see basic_string for more info on the template).

//* Note that this class handles bytes independently of the encoding used: If used to handle sequences of multi-byte or variable-length characters (such as UTF-8), all members of this class (such as length or size), as well as its iterators, will still operate in terms of bytes (not actual encoded characters).

//? String Concatination & Declarations
std::string first = "first";
std::string second("second");
char third[] = "third";
std::string sentence = first + std::string("---") +  second + std::string(3, '-') + third;

//? LENGTH
/*
cout << text.length() << endl;
cout<< name[name.length() - 1] << endl;
*/

//? RESIZE
unsigned sz = sentence.size();
sentence.resize (sz+2,'+'); // first second third++


//? FIND // NPOS
std::string str = "canary";
int foundIndex = str.find("a");
while (foundIndex != std::string::npos) { //while first string is missing in the second
  std::cout << foundIndex << std::endl;
  foundIndex = str.find("a", foundIndex + 1);
}

//? ERASE
  std::string eraseStr = "abc"; 
  eraseStr.erase(1,2); // erase(index, length) changes a string by removing chars ,removes length characters, starting from index

//? REPLACE
  std::string sentence = "the quick brown fox jumps over the lazy dog";
  std::string partOfSentenceToEnd = sentence.substr(4);
  std::string foxWord = "fox";
  std::string horseWord = "horse";
  sentence.replace(sentence.find(foxWord), foxWord.size(), horseWord); // the quick horse fox jumps over the lazy dog
  std::string s = "abc"; s.replace(1,2,"cme"); std::cout << s; // replace(index, length, str) changes a string by replacing , characters in [index, index + length) replaced by str
}

void commaRemover(std::string& csv)
{
    for (size_t i = 0; i < csv.length(); i++) {
        if (csv[i] == ',') {
            csv.replace(i, 1 , "");
        }
    }
}

std::string getRandomStringFromSpecialChars(const int length){
 static const char alphanum[] =
  "0123456789"
  "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
  "abcdefghijklmnopqrstuvwxyz";
 std::string tmp_s;
 tmp_s.reserve(length);

 for (int i = 0; i < length; ++i) tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];

 return tmp_s;}
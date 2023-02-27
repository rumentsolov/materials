#include <vector>


std::vector<int> vec[n]; 
//* Is a freakish Frankenstein's monster. It's a C array of vectors of ints. Declares an fixed size array of size n where n must be known at compile time (or a compiler extension must be available). During the initialization of vec the constructors of all n vectors are called. These vectors are allocated on the stack.There are some compilers (most notably gcc and clang) that accept n as a non constant size for a C array (the so called Variable Length Arrays), but that isn't standard and portable.

std::array<std::vector<int>, n>; //* is equvalent of that
std::vector<std::vector<int>> vec; //* is equvalent of that. It creates an empty vector of vectors though but the constructor of std::vector<int> is never called. You need to call
vec.resize(n); // * to change the size of vec to n calling the constructors of std::vector<int> n times. In contrast to std::vector<int> vec[n]; n does not need to be a compile time constant with this approach. Furthermore you can apply other operations on a std::vector<std::vector<int>> changing the number of elements further. In the second version the std::vector<int> objects are allocated on the heap. (The elements of the std::vector<int>s are stored different locations on the heap.)
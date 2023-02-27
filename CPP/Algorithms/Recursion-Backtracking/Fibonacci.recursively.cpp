#include <iostream>

int CalcFib(int i);


int main()
{

int i;

std::cin >> i;

std:: cout << CalcFib(i);

return 0;
}

int CalcFib(int i) {

    if (i <= 1) return 1;

    return CalcFib(i-1) + CalcFib(i - 2);
}
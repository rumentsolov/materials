#include <iostream>

int CalcFactorielRec(int idx);

int main()
{

    int idx;
    std::cin >> idx;
    std::cout << CalcFactorielRec(idx);
    return 0;
}

int CalcFactorielRec(int idx)
{
    if (idx == 0) return 1;
    return idx * CalcFactorielRec(idx - 1);
}
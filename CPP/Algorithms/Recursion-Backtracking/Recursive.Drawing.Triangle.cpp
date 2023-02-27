#include <iostream>

void Recursion(int idx);

void PrintFigure(int idx);

 char ch = '*';

int main()
    {
    
        int idx ;
        std::cin >> idx;
        Recursion(idx);

        return 0;
    }

void PrintFigure(int idx , char &ch)
{
    if(idx != 0)
    {
    std::string newStr = "";

    for ( int i = 0 ; i < idx; i++)
    {
        newStr.push_back(ch);
    }
        std::cout << newStr << std::endl;
    }
   
}


void Recursion(int idx)
{

    if (ch == '*') // Post-action: print n hashtags
    {
        PrintFigure(idx, ch);
    }

    if (idx == 0)
    {
        ch = '#';
        return;
    }
        

    Recursion(idx - 1);

    if (ch == '#') // Post-action: print n hashtags
    {
        PrintFigure(idx, ch);
    }

}


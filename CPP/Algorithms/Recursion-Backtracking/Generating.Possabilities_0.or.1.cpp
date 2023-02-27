#include <iostream>
#include <vector>

std::vector<int> arr;

void Gen01(std::vector<int> arr , int idx);

int main()
{
    int idx;

    std::cin >> idx;

    for (int i = 0; i < idx; i++) 
    {
        arr.push_back(0);
    }

    Gen01(arr , 0);
    return 0;
}

void Gen01(std::vector<int> arr , int idx)
{
    if (idx >= arr.size())
    {
        for(int i = 0; i < arr.size(); i++) std::cout << arr[i];
        std::cout << std::endl;
        return;
    }

    for (int i = 0; i <= 1; i++)
    {
        arr[idx] = i;

        Gen01(arr , idx + 1);
    }
    
}


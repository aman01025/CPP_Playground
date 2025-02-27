#include<iostream>
#include<vector>

void printSubArr_Iterative(std::vector<char> &arr)
{
    size_t arrSize = arr.size();
    for(int i = 0; i < arrSize; i++)
    {
        for(int j = i; j < arrSize; j++)
        {
            for(int k = i; k <= j; k++)
            {
                std::cout << arr[k] << " ";
            }
            std::cout << std::endl;
        }
    }
}

void printSubArr_Recursive(std::vector<char> &arr, int start, int end)
{
    if(end == arr.size()) return;

    else if(start > end) printSubArr_Recursive(arr, 0, end+1);

    else
    {
        for(int i = start; i <= end; i++)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
        printSubArr_Recursive(arr, start+1, end);
    }
}
using namespace std;
int main()
{
    std::vector<char> arr = {'a','b','c','d'};
    printSubArr_Recursive(arr, 0, 0);
    return 0;
}
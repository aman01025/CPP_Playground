#include<iostream>

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sum(n-1);
}

int main()
{
    int n;
    std::cout << "Enter a natural number: " << std::endl;
    std::cin >> n;
    std::cout << "Sum of first " << n << " natural numbers: " << sum(n); 
    
   return 0;
}
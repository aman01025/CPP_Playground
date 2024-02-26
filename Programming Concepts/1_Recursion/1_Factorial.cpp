#include<iostream>

int fact(int n)
{
    if (n < 0)
    {
        return -1;
    }
    if (n == 0)
    {
        return 1;
    }
    return n*fact(n-1);
}

int main()
{
    int n;
    std::cout << "Enter a positive integer: " << std::endl;
    std::cin >> n;
    std::cout << "Factorial of " << n << ": " << fact(n); 
    
   return 0;
}
#include<iostream>

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    std::cout << "Enter a positive number: " << std::endl;
    std::cin >> n;
    std::cout << "Fibonacci value at " << n << ": " << fib(n); 
    
   return 0;
}
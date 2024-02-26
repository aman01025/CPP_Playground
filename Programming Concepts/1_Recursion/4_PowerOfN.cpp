#include<iostream>

int powOfN(int x, int n)
{
    if (n == 1)
    {
        return x;
    }
    return x*powOfN(x,n-1);
}


//Method-2 with much less time complexity. Go to readme file for more details.
/*
    x^n    =    x*powOfN(x,n-1)
            but
    x^n    =    x^n/2 * x^n/2
*/

int powOfN_method2(int x, int n)
{
    if (n == 1)
    {
        return x;
    }
    int temp = powOfN_method2(x, n/2);   
    if(n%2 == 1)
    {
        return x*temp*temp;
    }
    else
    {
        return temp*temp;
    }
}

int main()
{
    int n, x;
    std::cout << "Enter a positive integer: " << std::endl;
    std::cin >> x;
    std::cout << "Enter the power: " << std::endl;
    std::cin >> n;
    std::cout << "Value of " << x << " to the power of " << n << " is: " << powOfN(x,n); 
   return 0;
}
#include<iostream>
#include<vector>

int fib(int n, std::vector<int>& dp)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    if(dp[n] != -1)
    {
        return dp[n];                        // We are using the value of fib(n), if previously calculated
    }
    dp[n] = fib(n-1, dp) + fib(n-2, dp);     // We are saving the value of fib(n)
    return dp[n];
}

int main()
{
    int n;
    std::cout << "Enter a positive number: " << std::endl;
    std::cin >> n;
    std::vector<int> dp(n+1, -1);
    std::cout << "Fibonacci value at " << n << ": " << fib(n, dp) << std::endl; 
    
   return 0;
}
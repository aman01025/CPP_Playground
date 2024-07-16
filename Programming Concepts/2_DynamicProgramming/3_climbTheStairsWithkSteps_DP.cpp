#include<iostream>
#include<vector>
//Suppose we are at ground...
//suppose there are p ways to reach from step-1 and q ways to reach the top when
//we are step-2, so to reach the top from step-0 will have p+q steps. Visualize
//this by drawing steps and ways on paper.

int noOfWays(int i, int k, int n, std::vector<int>& dp)
{
	if(i == n)
		return 1;  //Base Condition.
	//Returning 1 means we reach on top and we count this as one way
	if(i > n)
		return 0; //Base condition
	//Suppose we are at (n-1)th step and we take two steps and reach the
	//(n+1)th step, which doesn't exist
	if(dp[i] != -1)
	{
		return dp[i];
	}
    int ans = 0;
    for(int j = 1; j <= k; j++)
    {
	    int op = noOfWays(i+j, k, n, dp);
        ans+=op;
    }
    return dp[i] = ans;
}

int main()
{
	int n, k;
    std::cout << "Enter the number of stairs: " << std::endl;
    std::cin >> n;
    std::cout << "Enter the number of steps that can be taken at a time: " << std::endl;
    std::cin >> k;
	std::vector<int> dp(n+1, -1);
	std::cout << "No of ways to reach on top of " << n << " steps: " << noOfWays(0, k, n, dp) << std::endl; 
}

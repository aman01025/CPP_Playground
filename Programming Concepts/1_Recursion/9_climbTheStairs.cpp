#include<iostream>

//Suppose we are at ground...
//suppose there are p ways to reach from step-1 and q ways to reach the top when
//we are step-2, so to reach the top from step-0 will have p+q steps. Visualize
//this by drawing steps and ways on paper.

int noOfWays(int k, int n)
{
	if(k == n)
		return 1;  //Base Condition.
	//Returning 1 means we reach on top and we count this as one way
	if(k > n)
		return 0; //Base condition
	//Suppose we are at (n-1)th step and we take two steps and reach the
	//(n+1)th step, which doesn't exist
	
	return noOfWays(k+1, n) + noOfWays(k+2, n);
}

int main()
{
	int n = 5;
	std::cout << "No of ways to reach on top of " << n << " steps: " << noOfWays(0, n) << std::endl; 
}

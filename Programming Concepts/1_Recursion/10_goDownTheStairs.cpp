#include<iostream>

//Suppose we are at ground...
//suppose there are p ways to reach the bottom from step-(n-1) and q ways to reach the bottom when
//we are step-(n-2), so to reach the bottom from step-n will have p+q steps. Visualize
//this by drawing steps and ways on paper.

int noOfWays(int n)
{
	if(0 == n)
		return 1;  //Base Condition.
	//Returning 1 means we reach on the ground and we count this as one way
	if(0 > n)
		return 0; //Base condition
	//Suppose we are at 1st step and we take two steps and reach
	//beyond the bottom, which doesn't exist
	
	return noOfWays(n-1) + noOfWays(n-2);
}

int main()
{
	int n = 7;
	std::cout << "No of ways to reach the bottom from the top of " << n << " steps: " << noOfWays(n) << std::endl; 
}

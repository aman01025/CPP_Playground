#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

long finMaxSum(const std::vector<int> &arr)
{
    size_t len = arr.size();
    long maxVal = INT_MIN;
    for(int i = 0; i < len; i++)
    {
        long maxSubArr = 0;
        for(int j = i; j < len; j++)
        {
            maxSubArr += arr[j];
            if(maxVal < maxSubArr) maxVal = maxSubArr;
        }
    }
    return maxVal;
}

long finMaxSum_Kadane(const std::vector<int> &arr)
{
    size_t len = arr.size();
    long maxSum = arr[0];
    long currSum = arr[0];
    for(int i = 1; i < len; i++)
    {
        currSum = max(currSum + arr[i], static_cast<long>(arr[i]));
        maxSum = max(maxSum,currSum);
    }
    return maxSum;
}

int main()
{
    std::vector<int> arr =  {-2, -3, -8, 7, -1, -2, -3}; // {5, 4, 1, 7, 8};
    std::cout << "Max Sum using iterative approach: " << finMaxSum(arr) << std::endl;
    std::cout << "Max Sum using Kadene's Algorithm: " << finMaxSum_Kadane(arr) << std::endl;
    return 0;
}
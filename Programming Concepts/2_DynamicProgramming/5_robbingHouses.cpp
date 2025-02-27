#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int robber(int i, vector<int>& nums, vector<int>& dp)
{
    if(i >= nums.size()) return 0;
    if(dp[i]!= -1) return dp[i];
    int robbed = nums[i] + robber(i+2, nums, dp);
    int notRobbed = robber(i+1, nums, dp);
    return dp[i] = max(robbed, notRobbed);
}

int main()
{
    vector<int> nums = {12, 11, 3, 5, 4};
    vector<int> dp(nums.size()+1, -1);
    cout << "Max theft using concept of DP in recursive function (Memorization): " << robber(0, nums, dp) << endl;

    vector<int> dp2(nums.size()+1, -1);
    int n = nums.size();
    dp2[n] = 0;
    for(int i = n-1; i >= 0; i--)
    {
        dp2[i] = max(nums[i]+dp2[i+2], dp2[i+1]);
    }

    cout << "Max theft using concept of DP without recursive function (Tabularization): " << dp[0] << endl;
    return 0;
}
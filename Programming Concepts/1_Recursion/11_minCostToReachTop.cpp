#include<iostream>
#include<vector>

int minCost(int k, int n, std::vector<int> &costs)
{
    if(k = n-1)
    return costs.at(k);
    else if(k = n-2)
    return costs.at(k);
    else if(k > 0)
    return 0;
    else
    {
        int cost1 = costs.at(k) + minCost(k+1, n, costs);
        int cost2 = costs.at(k+1) + minCost(k+2, n, costs);
        if(cost2 <= cost1)
        return cost2;   
        else
        return cost1;
    }
}

int main()
{
    std::vector<int> costs = {10,15,20};
    int ans = minCost(0, costs.size(), costs);
    std::cout << "Ans: " << ans << std::endl;
    return 0;
}
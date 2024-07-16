#include<iostream>
#include<vector>

void storeSubsets(int i, std::vector<int>& setArr, std::vector<int>& temp, std::vector<std::vector<int>>& subsetArr)
{
    if(i == setArr.size())
    {
        subsetArr.push_back(temp);          //BASE CONDITION
    }
    else
    {
        storeSubsets(i+1,setArr, temp, subsetArr);  // In this step, we ignore the value
        temp.push_back(setArr[i]);
        storeSubsets(i+1,setArr, temp, subsetArr); // In this step, we include the value
        temp.pop_back();                           // BACKTRACKING step
    }
}
int main()
{
    std::vector<int> setArr = {1,2,3}, temp;
    std::vector<std::vector<int>> subsetArr;
    storeSubsets(0,setArr, temp, subsetArr);
    int i = 1;
    for(auto x : subsetArr)
    {
        std::cout << "Subset: " << i << ": ";
        for(auto n : x)
        {
            std::cout << n << " ";
        }
        std::cout << std::endl;
        i++;
    }
      
}
#include<iostream>
#include<vector>

std::vector<std::string> permutation(std::string &s, int pos)
{
    std::vector<std::string> ans;
    if(pos >= s.size())
    {
        ans.push_back(s);
    }
    for (int i = pos; i < s.size(); i++)
    {
        char temp = s.at(pos);
        s.at(pos) = s.at(i);
        s.at(i) = s.at(pos);
        std::vector<std::string> tempAns = permutation(s, pos+1);
        s.at(i) = s.at(pos);
        s.at(pos) = temp;
    }

    return ans;
}


int main()
{
    std::string s;
    std::cout << "Enter a string: " << std::endl;
    std::cin >> s;
    std::vector<std::string> ans = permutation(s, 0);
    std::cout << "All possible permutations: " ;
    for(int i = 0; i < ans.size(); i++)
    {
        std::cout << ans.at(i) << " ";
    }
    return 0;
}
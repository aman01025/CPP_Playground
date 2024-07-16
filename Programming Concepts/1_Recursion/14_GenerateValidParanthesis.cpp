#include<iostream>
#include<vector>

void genPara(int o, int c, int n, std::string temp, std::vector<std::string>& res)
{
    //o -> count of opening para
    //c -> count of closing para

    if(c == n)
    {
        //Since closing brackets can never be more than the value of n
        //We dont check for o == n because their might be still closing brackets left
        res.push_back(temp);    //Base Condition
    }
    else
    {
        if(o < n)
        {
            // We add an opening bracket
            genPara(o+1, c, n, temp+'(', res);
        }
        if(c < o)
        {
            // We add a closing bracket
            genPara(o, c+1, n, temp+')', res);
        }
    }
}

int main()
{
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << std::endl;
    std::string temp;
    std::vector<std::string> ans;
    genPara(0,0,n,temp, ans);
    std::cout << "size of ans: " << ans.size() << std::endl;
    for(std::string x : ans)
    {
        std::cout << x << std::endl;
    }
    return 0;
}
#include <iostream>
#include<string>

bool isPalindrome(int x) 
    {
        std::string temp = "";
        if (x<0)
        {
            return false;
        }
        while(x != 0)
        {
            char ch = x%10 + 48;
            temp += ch;
            x = x/10;
        }
        if (temp.size() == 1)
        {
            return true;
        }
        for (int i = 0, j = temp.size()-1; i < temp.size()/2; i++, j--)
        {
            if(temp.at(i) != temp.at(j))
            {
                return false;
            }
        }
        return true;
    }

bool isPalindrome2(int n)
{
    int p = 0, q = n;
    while (n != 0)
    {
        p = p*10 + n%10;
        n = n/10;
    }
    std::cout << "p: " << p << "  n: " << n << std::endl;
    if (p == q)
    {
        return true;
    }
    return false;

}

int main()
{
    std::cout << isPalindrome2(12121);
    return 0;
}
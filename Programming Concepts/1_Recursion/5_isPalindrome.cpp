#include<iostream>

bool isPalindrome(std::string &s, int l, int r)
{
    if(l>=r) return true;
    if(s[l] != s[r]) return false;
    return isPalindrome(s, l+1, r-1);
}
//Explanation
/*
We are checking if s.at(l) is equal to s.at(r) or not. If yes, then remaining portion of the string is checked using recursion.
*/

int main()
{
    std::string s;
    std::cout << "Enter a string: " << std::endl;
    std::cin >> s;
    if(isPalindrome(s, 0, s.size()-1))
    {
        std::cout << "String is palindrome" << std::endl;
    }
    else
    {
        std::cout << "String is not palindrome" << std::endl;
    }  
}
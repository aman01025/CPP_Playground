#include<iostream>

void reverseString(std::string &s, int l, int r)
{
    if(l>=r) return;
    char temp = s.at(l);
    s.at(l) = s.at(r);
    s.at(r) = temp;
    reverseString(s, l+1, r-1);
}

int main()
{
    std::string s;
    std::cout << "Enter a string: " << std::endl;
    std::cin >> s;
    reverseString(s, 0, s.size()-1);
    std::cout << "New string: " << s << std::endl;
}
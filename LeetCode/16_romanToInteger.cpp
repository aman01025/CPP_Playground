#include <iostream>

int romanToInt(std::string s)
{
    int num = 0;
    char prev = '0';
    for (int i = s.size() - 1; i >= 0; i--)
    {
        
        char ch = s.at(i);
        if (ch == 'I' && !(prev == 'V' || prev == 'X'))
        {
            std::cout << "char: " << ch << " prev: " << prev << " num: " << num << std::endl;
            num = num + 1;
            prev = 'I';
        }
        else if (ch == 'I' && (prev == 'V' || prev == 'X'))
        {
            std::cout << "char: " << ch << " prev: " << prev << " num: " << num << std::endl;
            num = num - 1;
            // prev = 'I';
        }
        else if (ch == 'V')
        {
           std::cout << "char: " << ch << " prev: " << prev << " num: " << num << std::endl;
            num = num + 5;
            prev = 'V';
        }
        else if (ch == 'X' && !(prev == 'L' || prev == 'C'))
        {
            std::cout << "char: " << ch << " prev: " << prev << " num: " << num << std::endl;
            num = num + 10;
            prev = 'X';
        }
        else if (ch == 'X' && (prev == 'L' || prev == 'C'))
        {
            std::cout << "char: " << ch << " prev: " << prev << " num: " << num << std::endl;
            num = num - 10;
            // prev = 'X';
        }
        else if (ch == 'L')
        {
           std::cout << "char: " << ch << " prev: " << prev << " num: " << num << std::endl;
            num = num + 50;
            prev = 'L';
        }
        else if (ch == 'C' && !(prev == 'D' || prev == 'M'))
        {
            std::cout << "char: " << ch << " prev: " << prev << " num: " << num << std::endl;
            num = num + 100;
            prev = 'C';
        }
        else if (ch == 'C' && (prev == 'D' || prev == 'M'))
        {
            std::cout << "char: " << ch << " prev: " << prev << " num: " << num << std::endl;
            num = num - 100;
            // prev = 'C';
        }
        else if (ch == 'D')
        {
            std::cout << "char: " << ch << " prev: " << prev << " num: " << num << std::endl;
            num = num + 500;
            prev = 'D';
        }
        else if (ch == 'M')
        {
            std::cout << "char: " << ch << " prev: " << prev << " num: " << num << std::endl;
            num = num + 1000;
            prev = 'M';
        }
    }
    return num;
}

int main()
{
    std::cout << romanToInt("MCMXCIV") << std::endl; 
    return 0;
}
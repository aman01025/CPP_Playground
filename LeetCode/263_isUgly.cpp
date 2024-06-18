#include<iostream>
#include<math.h>

bool isUgly(int n)
{
    bool isfacGTfive = false;
    if (n < 1)
    {
        return false;
    }
    if (n == 1)
    {
        return true;
    }

    while (n%2 == 0)
    {
        n = n/2;
    }

    for (int i = 3 ; i <= sqrt(n) ; i+=2)
    {
        while(n%i == 0)
        {
            if (i > 5)
            {
                return false;
            }
            n = n/i;
        }
    } 
    if (n > 5)
    {
        return false;
    }
    return true;     
}


bool isUgly2(int n)
{
    if(n == 0)
    {
        return false;
    }
    while(n%2 == 0)
    {
        n = n/2;
    }
    while(n%3 == 0)
    {
        n = n/3;
    }
    while(n%5 == 0)
    {
        n = n/5;
    }
    return n==1;
}
int main()
{
    std::cout << isUgly(14) << std::endl;
    std::cout << isUgly(6) << std::endl;
    std::cout << isUgly(0) << std::endl;
    std::cout << isUgly(1) << std::endl;
    std::cout << isUgly(23423) << std::endl;
    return 0;
}
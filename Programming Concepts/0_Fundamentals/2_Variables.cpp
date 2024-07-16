#include<iostream>

int e; // Being global, it is implicitly intitialized to 0

int main()
{
    int a{10};
    int b;          
    int c = 20;
    int d{};

    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Value of b: " << b << std::endl; //It will not give any compilation error but will print any garbage value
    std::cout << "Value of c: " << c << std::endl;
    std::cout << "Value of d: " << d << std::endl; //it is implicitly intitialized to 0
    std::cout << "Value of e: " << e << std::endl;
}
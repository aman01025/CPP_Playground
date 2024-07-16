#include<iostream>
#include<string.h>
int main()
{
    int a{10};
    int* p(&a);
    std::cout << "Size of a (int type): " << sizeof(*p) << std::endl;

    char ch{'A'};
    char* p1(&ch);
    std::cout << "Value of char variable ch: " << sizeof(*p) << std::endl;
    std::cout << "Size of ch (char type): " << sizeof(*p1) << std::endl;

/*
Pointers to char can be initialized with string literal : C-literal
*/
    //char *str{"Aman Gupta"}; // This will give "warning" OR compilation error. In our case we just get the warning.
    //To avoid warning or error:
    //Declare as...
    const char *str = "Aman Gupta";
    std::cout << "Value of *str: " << *str << std::endl;
    std::cout << "Value of *(str+1): " << *(str+1) << std::endl;
    std::cout << "Value of *str+1: " << *str+1 << std::endl;
    std::cout << "Value of str: " << str << std::endl;
    std::cout << "Value of str+1: " << str+1 << std::endl;
    std::cout << "Size of str: " << sizeof(str) << std::endl;
    std::cout << "Size of *str: " << sizeof(*str) << std::endl;

    //To print the size of the string, we can use the strlen function
    std::cout << "Length of string pointed by *str: " << strlen(str) << std::endl;
    //Note from the output that the above size does NOT include the NULL terminating character

    /*
        Can we modify the value of *str?
        Answer is NO. Because it is of type const char* and we cannot change the value of const
        Hence...
        char *str = "hell"; is valid
        then..
        str = "hello"; is ILLEGAL
    */
}
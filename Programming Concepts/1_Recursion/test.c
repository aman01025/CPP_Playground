#include<stdio.h>


void func1(int);

void main()
{
    int a = 8;
    func1(a);
}


void func1(int a)
{
    int b = 9;
    printf("\n%d", &b);
    int c = 4;
    printf("\n%d", c);
    {
        int b = 22;
        printf("\n%d", &b);
    }
    printf("\n%d", a);
}
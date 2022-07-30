// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function
#include <stdio.h>
int fun(int n);
int add(int n);
int main()
{
    int x = 5;
    fun(x);
    printf("Sum is = %d",add(x));
    return 0;
}
int add(int n)
{
    int z=0;
    while (n)
    {
        z=z+fun(n) / n;
        n--;
    }
    return z;
}
int fun(int n)
{
    int a = 1;
    while (n)
    {
        a = a * n;
        n--;
    }
}

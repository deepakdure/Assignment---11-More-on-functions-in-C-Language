// 9. Write a program in C to find the square of any number using the function.
#include <stdio.h>
int square(int n);
int main()
{
    int x;
    printf("enter a number = ");
    scanf("%d", &x);
    printf("Square of %d is = %d", x, square(x));
    return 0;
}
int square(int n)
{
    return n * n;
}

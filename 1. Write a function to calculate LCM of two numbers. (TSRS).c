// 1. Write a function to calculate LCM of two numbers. (TSRS)
#include <stdio.h>
int LCM(int x, int y);
int main()
{
    int a, b;
    printf("enter 2 numbers = \n");
    scanf("%d%d", &a, &b);
    printf("LCM = %d", LCM(a, b));
    return 0;
}
int LCM(int x, int y)
{
    int i, j;
    for (i = x > y ? x : y; i <= x * y; i = i + (x > y ? x : y))
    {
        if (i % x == 0 && i % y == 0)
        {
            return i;
        }
    }
}

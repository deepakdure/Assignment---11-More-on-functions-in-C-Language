// 2. Write a function to calculate HCF of two numbers. (TSRS)
#include <stdio.h>
int HCF(int x, int y);
int main()
{
    int a, b;
    printf("enter two numbers\n");
    scanf("%d%d", &a, &b);
    printf("HCF is %d", HCF(a, b));
    return 0;
}
int HCF(int x, int y)
{
    int i, z = x > y ? y : x;
    for (i = z; i <= x > y ? x : y; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            break;
        }
    }
    if (i == z - 1)
        return 1;
    else
        return i;
}
// 3. Write a function to check whether a given number is Prime or not. (TSRS)
#include <stdio.h>
int PRIME(int x);
int main()
{
    int n, A;
    printf("enter a number = ");
    scanf("%d", &n);
    A = PRIME(n);
    if (A == 0)
        printf("Not Prime");
    else
        printf("Prime");
    return 0;
}
int PRIME(int x)
{
    int i;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
}
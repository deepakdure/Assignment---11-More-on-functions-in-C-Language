// 4. Write a function to find the next prime number of a given number. (TSRS)
#include <stdio.h>
int NEXTPRIME(int x);
int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d", &n);
    printf("Next prime number is = %d", NEXTPRIME(n));
    return 0;
}
int NEXTPRIME(int x)
{
    int i, j;
    for (i = x + 1; i < i + 1; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
            return i;
    }
}

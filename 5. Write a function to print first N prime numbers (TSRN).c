// 5. Write a function to print first N prime numbers (TSRN)
#include <stdio.h>
void First_N_Prime(int);
int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d", &n);
    First_N_Prime(n);
    return 0;
}
void First_N_Prime(int x)
{
    int i, j, a = 0;
    for (i = 1; i <= i; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            printf("%d ", i);
            a++;
            if (a == x)
                break;
        }
    }
}

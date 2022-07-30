// 8. Write a function to print PASCAL Triangle. (TSRN)
#include <stdio.h>
int Factorial(int);
int Combination(int, int);
void Pascal_Triangle(int);
int main()
{
    int n, r;
    printf("enter number of columns for pascal triangle = ");
    scanf("%d", &n);
    Factorial(n);
    Combination(n, r);
    Pascal_Triangle(n);
    return 0;
}
int Factorial(int a)
{
    int b = 1;
    while (a)
    {
        b = b * a;
        a--;
    }
    return b;
}
int Combination(int x, int y)
{
    return (Factorial(x) / Factorial(x - y) / Factorial(y));
}
void Pascal_Triangle(int x)
{
    int i, j, k;
    for (i = 1; i <= x; i++)
    {
        k = 1;
        int r = 0;
        for (j = 1; j <= 2 * x - 1; j++)
        {
            if (j >= x + 1 - i && j <= x - 1 + i && k)
            {
                printf("%2d", Combination((i - 1), r));
                k = 0;
                r++;
            }
            else
            {
                printf("  ");
                k = 1;
            }
        }
        printf("\n");
    }
}

// 7. Write a function to print first N terms of Fibonacci series (TSRN)
#include <stdio.h>
void Fibonacci_Series(int x);
int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d", &n);
    Fibonacci_Series(n);
    return 0;
}
void Fibonacci_Series(int x)
{
    int a = -1, b = 1, c = 0;
    printf("%d terms of fibonacci series is = ", x);
    while (x)
    {
        c = a + b;
        a = b;
        b = c;
        x--;
        printf("%d ", c);
    }
}
// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include <stdio.h>
void PBTN(int x, int y);
int main()
{
    int a, b;
    printf("enter 2 numbers\n");
    scanf("%d%d", &a, &b);
    PBTN(a, b);
    return 0;
}
void PBTN(int x, int y)
{
    printf("Prime numbers between %d and are \n",x,y);
    int i, j;
    for (i = x; i <= y; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
            printf("%d ", i);
    }
}

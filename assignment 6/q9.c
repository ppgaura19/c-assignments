#include <stdio.h>

int sum(int n);

int main()
{
    int x, y;
    printf("enter the number:\n ");
    scanf("%d", &x);

    y = sum(x);
    printf(" sum of first %d natural number is %d \n", x, y);

    return 0;
}

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return (n + sum(n - 1));
}
#include <stdio.h>

int sum(int n)
{
    int s = 0;
    if (n == 0)
        return 0;
    else
    {
        s = n % 10;
        n = n / 10;

        return s + sum(n);
    }
}

int main()
{
    int n, y;
    printf("enter the number\n");
    scanf("%d", &n);

    y = sum(n);
    printf("sum of digit is %d", y);
}
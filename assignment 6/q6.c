#include <stdio.h>

float sum(int n);

int main()
{
    int x;
    float y;
    printf("enter the number\n");
    scanf("%d", &x);
    y = sum(x);
    printf("required sum is %f", y);
    return 0;
}

float sum(int n)
{
    int i=1;
    float q = 0,p = 1;
    for (i = 1; i <= n; i++)
    {
        p = p * i;
        q = q + (1 / p);
    }
    return q;
}
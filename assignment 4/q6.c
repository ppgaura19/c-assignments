#include <stdio.h>
int main()
{
    int a = 1, n, p = 1;
    printf("enter the number");
    scanf("%d", &n);
    while (a <= n)
    {
        p = p * a;
        a++;
    }
    printf("factorial of %d is %d", n, p);
}
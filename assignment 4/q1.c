#include <stdio.h>
int main()
{
    int n, a, sum = 0;

    printf("enter the number\n");
    scanf("%d", &n);

    a = 1;
    while (a <= n)
    {
        sum = sum + a;
        a++;
    }

    printf("Sum of first %d natural numbers is\n %d", n, sum);

    return 0;
}
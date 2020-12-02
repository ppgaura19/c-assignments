#include <stdio.h>
int main()
{
    int n, a, sum = 0;

    printf("enter the number\n");
    scanf("%d", &n);

    a = 1;
    do
    {
        sum = sum + a;
        a++;
    } while (a <= n);
    printf("Sum of first %d natural numbers is\n %d", n, sum);

    return 0;
}
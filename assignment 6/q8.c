#include <stdio.h>
long fact(int n);
int main()
{
    int x, y;
    printf("Enter a number to find factorial:\n ");
    scanf("%ld", &x);
    if (x < 0)
        printf("Factorial of negative no. is not defined. \n");
    else
    {
        y = fact(x);
        printf(" value is %d \n", y);
    }
    return 0;
}

long fact(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * fact(n - 1));
}
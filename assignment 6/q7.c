#include <stdio.h>

#include <math.h>

int prime(int n);

int armstrong(int n);

int perfect(int n);

int main()
{
    int x, y, a, s, p, b;
    printf("enter the number\n");
    scanf("%d", &x);
    s = prime(x);
    if (x == 1)
    {
        printf("number is not a prime number \n");
    }
    else if (s == 0)
    {
        printf("number is prime\n");
    }
    else
    {
        printf("number is not prime\n");
    }
    printf("\n");

    p = armstrong(x);
    if (p == 0)
        printf("number is armstrong number\n");
    else
        printf("number is not an armstrong number\n");

    printf("\n");

    y = perfect(x);
    if (y == 0)
        printf("number is perfect number\n");
    else
        printf("number is not an perfect number\n");
}

int prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 1;
        }
    }
    return 0;
}

int armstrong(int n)

{
    int s, z, t;
    s = n;
    while (n != 0)
    {
        z = 0;
        t = n % 10;
        z = z + (t * t * t);
        n = n / 10;
    }
    if (s == z)
        return 0;
    else
        return 1;
}

int perfect(int n)
{
    int i, t, s = 0;
    t = n;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            s = s + i;
        }
    }
    if (s == t)
        return 0;
    else
        return 1;
}
#include <stdio.h>
#include <math.h>

int gcd(int a, int b);

int main()
{
    int x, y, t;

    printf("Enter two integers\n");
    scanf("%d%d", &x, &y);
    t = gcd(x, y);
    printf("gcd is %d", t);
}

int gcd(int a, int b)
{
    if (a <= b)
    {
        if (b % a == 0)
            return a;
        return gcd(b % a, a);
    }
    else
    {
        if (a % b == 0)
            return b;
        return gcd(a % b, b);
    }
}
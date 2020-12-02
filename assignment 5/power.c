#include <stdio.h>

int power(int a, int b)
{
    if (b == 0)
        return 1;
    else
    {
        return a * power(a, b - 1);
    }
}
int gcd(int a, int b)
{
    if (b > a)
    {
        int r = b % a;
        if (r == 0)
            return a;
        else
        {
            return gcd(r, a);
        }
    }

    else
    {
        int r = a % b;
        if (r == 0)
            return b;
        else
        {
            return gcd(r, b);
        }
    }
}
int main()
{
    int x, y, z;
    printf("enter base and power");
    scanf("%d%d", &x, &y);
    z = gcd(x, y);
    printf("value is %d", z);
    return 0;
}
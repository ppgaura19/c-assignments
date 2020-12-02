#include <stdio.h>

int collection(int n, int r);

int main()
{
    int x, y, z;
    printf("enter the exponent\n");
    scanf("%d", &x);
    printf("enter base\n");
    scanf("%d", &y);
    z = collection(x, y);
    if (z == -1)
        printf("value is not possible");
    else
        printf("value is %d", z);
    return 0;
}

int collection(int n, int r)
{
    if (n < 0 || r < 0)
    {
        return -1;
    }
    int i = 1, j = 1, p = 1, q = 1;
    for (i = n; i > n - r; i--)
    {
        p = p * i;
    }
    for (j = 1; j <= r; j++)
    {
        q = q * j;
    }
    int s = p / q;
    
    return s;
}

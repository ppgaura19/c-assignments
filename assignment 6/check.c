#include <stdio.h>

int rev(int n)
{
    if (n < 10)
        return n;
    else
    {
        return n%10 + rev(n/10);
    }
}

int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d", &n);

    printf("%d", rev(n));
    return 0;
}
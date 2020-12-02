#include <stdio.h>
int main()
{
    int n,r=0, s;
    printf("enter the number");
    scanf("%d", &n);
    for (;n != 0;)
    {
        s = n % 10;
        r=r+s;
        n=n/10;
    }
    printf("sum of the digit is:%d\n", r);
    return 0;
}
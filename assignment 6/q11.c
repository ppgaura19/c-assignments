#include <stdio.h>

int rev(int n)
{
    int s ;
    if (n <= 10)
        printf("%d",n);
    else
    {
        s = n % 10;
        printf("%d",s);
        n = n / 10;
        rev(n);
    }
}

int main()
{
    int y;
    printf("enter the number\n");
    scanf("%d", &y);

    printf("reverse of digit is ");
    rev(y);
}
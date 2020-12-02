#include <stdio.h>

int main()
{
    int i=1, n,r=0, s;
    printf("enter the number");
    scanf("%d", &n);
    for (; n != 0;i=i*10)
    {
        s = n % 2;
        n = n / 2;
        r=r+i*s;
      
    }
printf("%d", r);  
    return 0;
}
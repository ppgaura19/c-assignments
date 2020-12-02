#include <stdio.h>
int main ()
{
  int a=0, n;
    printf("enter the number");
    scanf("%d",&n);
    while (n !=0)
    {
n=n/10;
a++;
    }
    printf("number of digits is %d",a);
    return 0;
}
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a positive number\n");
    scanf("%d", &a);
    switch (a % 2)
    {
    case 0:
        printf("\n given number is even");
        break;
    case 1:
        printf("\n given number is odd");
        break;
        default:
        printf("free");
break;    }
    return 0;
}
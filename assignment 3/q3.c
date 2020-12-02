#include <stdio.h>
int main()
{
    int a;
    printf("Enter the year\n ");
    scanf("%d", &a);
    if (a % 400 == 0)
        printf("\n this is a leap year");
    else if (a % 100 == 0)
        printf(" this is not a leap year");
    else if (a % 4 == 0)
        printf(" this is a leap year");
    else if (a % 4 > 0)
        printf(" this is not a leap year");
    return 0;
}
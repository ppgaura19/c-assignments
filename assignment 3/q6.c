#include <stdio.h>
int main()
{
    float a;
    printf("Enter the number: ");
    scanf("%f", &a);
    if (a < 0)
        printf("\n %f is negative", a);
    else if (a > 0)
        printf("\n %f is positive", a);
    else
        printf("\n%f is zero", a);
    return 0;
}
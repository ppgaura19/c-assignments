#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter two number\n ");
    scanf("%f", &a);
    scanf("%f", &b);
    if (a > b)
        printf("\n greater of two is %f", a);
    else if (a < b)
        printf(" greater of two is %f", b);
    else
        printf("both are equal");
    return 0;
}
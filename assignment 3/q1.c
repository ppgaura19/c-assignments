#include <stdio.h>
int main()
{
    float a;
    printf("Enter the age\n ");
    scanf("%f", &a);
    if (a >= 18)
        printf("\n you are eligible to vote");
    else
        printf("\n you are not eligible to vote");
    return 0;
}
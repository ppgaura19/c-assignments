#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, r1, r2, r3, r4, i;
    printf("coefficient of x*x\n");
    scanf("%f", &a);
    printf("coefficient of x\n");
    scanf("%f", &b);
    printf(" constant term\n");
    scanf("%f", &c);
    if (b * b - 4 * a * c >= 0)
    {
        r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        printf("roots are %0.2f and %0.2f",r1,r2);
    }
    if (b * b - 4 * a * c < 0)
    {
        r3 = -b / (2 * a);
        r4 = sqrt(4 * a * c - b * b);
        printf("roots are %0.2f + %0.2f i and %0.2f-%0.2fi", r3, r4, r3, r4);
    }
    return 0;
}

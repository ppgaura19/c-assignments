#include <stdio.h>
int main()
{

    float a, b;
    float c = 3.14;
    float area;
    printf(" major and minor axis are:\n ");
    scanf("%f", &a);
    scanf("%f", &b);
    printf("Area of Ellipse with major axis as %f and minor axis as %f is %f", a, b, c * a * b);
}
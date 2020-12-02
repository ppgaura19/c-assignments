#include <stdio.h>

#include <math.h>

float area(float a);
int main()
{
    float r, s;
    printf("enter the radius\n");
    scanf("%f", &r);

    s = area(r);
    printf("area of the circle is %f", s);
    return 0;
}

float area(float a)
{
    float p = M_PI * a * a;
    return p;
}
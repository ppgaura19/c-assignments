#include <stdio.h>
#include <math.h>
float area(float a, float b, float c);
int main()
{
    float x, y, z;
    printf(" THREE SIDES OF THE TRIANGLE ARE:\n ");
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);
    if (x + y > z && y + z > x && z + x > y)
    {

        printf("AREA OF TRIANGLE IS %f", area(x, y, z));
    }
    else
        printf("these side can not be side");

    return 0;
}
float AREA, s;
float area(float a, float b, float c)
{

    s = ((a + b + c) / 2);
    AREA = sqrt(s * (s - a) * (s - b) * (s - c));
    return AREA;
}
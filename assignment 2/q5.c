#include <stdio.h>
#include <math.h>
int main()
{
    float a1, b1, a2, b2, s;
    printf("write the first coordinates\n");
    scanf("%f%f", &a1, &b1);
    printf("write the second coordinates\n");
    scanf("%f%f", &a2, &b2);
    s = sqrt((a1 - a2) * (a1 - a2) + (b1 - b2) * (b1 - b2));
    printf("distance between these two points is %f\n", s);
    return 0;
}
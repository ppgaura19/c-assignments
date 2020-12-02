#include <stdio.h>
#include <math.h>
int main()
{

    float a, b, c;
    float AREA, s;
    printf(" THREE SIDES OF THE TRIANGLE ARE:\n ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    if (a+b>c && b+c>a && c+a>b){
        s = ((a + b + c) / 2);
    AREA = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("AREA OF TRIANGLE IS %f", AREA);

    }
    else
    printf("these side can not be side");
    
    return 0;
}

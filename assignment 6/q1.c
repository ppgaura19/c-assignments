#include <stdio.h>

void swap(float a, float b);

int main()
{
    float x, y;
    printf("enter two number\n");
    scanf("%f%f", &x, &y);
    swap(x, y);

}

void swap(float a, float b)
{
    a = a + b;
    b = a - b;
    a = a - b;

    printf("swap is %f and %f", a, b);
}
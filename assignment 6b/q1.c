#include <stdio.h>

int smallest(int a, int b, int c);

int main()
{
    int x, y, z, s;
    printf("enter first number\n");
    scanf("%d", &x);
    printf("enter second number\n");
    scanf("%d", &y);
    printf("enter third number\n");
    scanf("%d", &z);
    s = smallest(x, y, z);
    printf("minimum of three number is %d", s);

    return 0;
}

int smallest(int a, int b, int c)
{

    return (a < b ? a : b) < c ? (a < b ? a : b) : c;
}
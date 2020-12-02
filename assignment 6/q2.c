#include <stdio.h>

int greater(int a, int b, int c);

int main()
{
    int x, y, z, big;
    printf("enter first number\n");
    scanf("%d", &x);
    printf("enter second number\n");
    scanf("%d", &y);
    printf("enter third number\n");
    scanf("%d", &z);
    big = greater(x, y, z);
    printf("maximum of three number is %d", big);

    return 0;
}

int greater(int a, int b, int c)
{
    int t = (a > b ? a : b) > c ? (a > b ? a : b) : c;
    return t;
}
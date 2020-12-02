#include <stdio.h>
int sum(int a, int b);
int main()
{
    int x, y, z;
    printf("enter first number\n");
    scanf("%d", &x);
    printf("enter second number\n");
    scanf("%d", &y);
    z = sum(x, y);
    printf("sum of the given two number is %d", z);
    return 0;
}
int sum(int a, int b)
{
    return a+b;
}
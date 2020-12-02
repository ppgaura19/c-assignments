#include <stdio.h>

void check(int a);

int main()
{
    int x;
    printf("enter the number\n");
    scanf("%d", &x);
    check(x);
}

void check(int a)
{
    if (a % 2 == 0)
        printf("number is even");
    else
        printf("number is odd ");
}
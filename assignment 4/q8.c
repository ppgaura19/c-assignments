#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int a, b;
    printf("enter the number");
    scanf("%d%d", &a, &b);

    swap(&a, &b);

    printf("reverse ofmthe given number is %d and %d\n", a, b);
}

void swap(int *a, int *b)
{
    int t = *b;
    *b = *a;
    *a = t;
    
}
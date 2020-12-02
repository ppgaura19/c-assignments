//Write a Program to reverse the array elements in C Programming.

#include <stdio.h>

int main()
{
    int n, i;

    printf("enter the number of element in the array\n");
    scanf("%d", &n);

    int A[n];

    printf("enter the element of the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("elements of the array after the reverse is\n");

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", A[i]);
    }
}
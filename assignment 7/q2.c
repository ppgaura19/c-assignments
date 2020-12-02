// Write a Program to find the largest and smallest element in Array.

#include <stdio.h>

int main()
{

    int i, n, c, d;
    printf("Enter the no of elements into the array\n");
    scanf("%d", &n);
    int A[n];

    printf("Enter the elements into the array\n");

    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    c = A[0];

    for (i = 1; i < n; i++)
    {
        c = (c > A[i] ? c : A[i]);
    }

    d = A[0];

    for (i = 1; i < n; i++)
    {
        d = (d < A[i] ? d : A[i]);
    }

    printf("greatest of them is %d:\n", c);
    printf("smallest of them is %d:\n", d);
}
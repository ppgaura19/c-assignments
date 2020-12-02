//Write a Program to search an element in array (use linear-search technique).

#include <stdio.h>

int main()
{
    int n, i, c;

    printf("number of elements in the given array \n");
    scanf("%d", &n);
    int A[n];

    printf("enter the elements of the given array \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("enter the elements whose position/index you want to check in the given array \n");
    scanf("%d", &c);

    int s = 0;

    for (i = 0; i < n; i++)
    {
        if (A[i] == c)
        {
            printf("position/index is %d\n", i);
            s = 1;
        }
    }
    if (s == 0)
        printf("elements does not belongs to this array\n");
}
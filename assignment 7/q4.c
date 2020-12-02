//Write a Program for deletion of an element from the specified location from Array.

#include <stdio.h>

int main()
{

    int i, j, n;
    printf("Enter the no of elements into the array\n");
    scanf("%d", &n);

    int A[n];

    printf("Enter the elements into the array\n");

    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("enter the place/location from  where you want to delete the number\n");
    scanf("%d", &j);
    
    for (i = j; i < n - 1; i++)
    {
        A[i] = A[i + 1];
    }
    printf("array after deletation\n");

    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", A[i]);
    }
}
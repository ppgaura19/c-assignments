    
// Write a Program for insert of an element from the specified location from Array.

#include <stdio.h>

int main()
{

    int i, j, n, x, c;
    printf("Enter the no of elements into the array\n");
    scanf("%d", &n);

    int A[n],B[n+1];

    printf("Enter the elements into the array\n");

    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("Enter the elements that you want to insert\n");
    scanf("%d", &c);

    printf("enter the place where you want to insert this number.\n");
    scanf("%d", &j);


    for (i = j; i < n; i++)
    {
        int temp = A[i];
        A[i] = c;
        c = temp;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}
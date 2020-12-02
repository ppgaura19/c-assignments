//  Write a Program to perform addition of all elements in Array.

#include <stdio.h>

int main()
{

    int i, n, sum = 0;
    printf("Enter the no of elements into the array\n");
    scanf("%d", &n);

    int A[n];

    printf("Enter the elements into the array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    printf("The sum of the elements of the array is: ");
    for (i = 0; i < n; i++)
        sum = sum + A[i];
    printf("%d", sum);
}
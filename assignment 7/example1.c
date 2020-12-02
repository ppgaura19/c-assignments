//Write a program to insert 5 elements into an array and print the elements of the array.

#include <stdio.h>

int main()
{

    int i, n, A[60];
    printf("Enter the no of elements into the array\n");
    scanf("%d", &n);

    printf("Enter the elements into the array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    printf("The elements of the array are:");
    for (i = 0; i < n; i++)
        printf("%d" , A[i]);
}
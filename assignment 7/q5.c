//Write a Program merge two unsorted arrays.

#include <stdio.h>

int main()
{
    int n, m, i, j;
    printf("For the first array\n");
    printf("Enter the no of elements into the array\n");
    scanf("%d", &n);

    int A[n];

    printf("Enter the elements into the array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("For the second array\n");
    printf("Enter the no of elements into the array\n");
    scanf("%d", &m);

    int B[m];
    int C[m + n];

    printf("Enter the elements into the array\n");
    for (i = 0; i < m; i++)
        scanf("%d", &B[i]);

    for (i = 0; i < n; i++)
    {
        C[i] = A[i];
    }

    for (i = n; i < m + n; i++)
    {
        C[i] = B[i - n];
    }

    printf("Enter the elements into the array\n");
    for (i = 0; i < n + m; i++)
        printf("%d ", C[i]);
}
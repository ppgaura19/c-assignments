// Write a program for addition of two matrices of order 3x3 in C.

#include <stdio.h>

int main()
{
    int A[3][3], B[3][3], C[3][3], i, j, k, s;

    printf("enter 9 elements for matrix A\n");

    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            scanf("%d", &A[i][j]);

    printf("enter 9 elements for matrix B\n");
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            scanf("%d", &B[i][j]);

    printf("addition of two matrices is \n");

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];

            printf("%d ", C[i][j]);
        }

        printf("\n");
    }
}

// Write a Program to multiply two 3 X 3 Matrices.

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

    printf("product of the matrix is \n");

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            s = 0;
            for (k = 0; k <= 2; k++)
            {
                s = s + A[i][k] * B[k][j];
            }
            printf("%d ", s);
        }
        printf("\n");
    }
}
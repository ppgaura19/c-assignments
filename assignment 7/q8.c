//Write a Program to access an element in 2-D Array.

#include <stdio.h>

int main()
{
    int n, m, i, j, c;
    printf("enter number of row\n");
    scanf("%d", &m);

    printf("enter number of column\n");
    scanf("%d", &n);

    int A[m][n];

    printf("enter your elements\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("enter the element whose index/position do you want to check\n");
    scanf("%d", &c);
    int s = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (c == A[i][j])
            {
                printf("row is %d and column is %d\n", i, j);
                s = 1;
            }
        }
    }
    if (s == 0)
        printf("elements does not belongs to this array\n");
}
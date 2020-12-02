#include <stdio.h>
int main()
{
    int i, j, k, l;
    for (i = 1; i <= 5; i++)
    {

        for (j = 1; j <= 5 - i; j++)
        {
            printf("  ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%d ", k);
        }
        for (k = k - 2;k>0;k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
}
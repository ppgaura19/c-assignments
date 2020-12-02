#include <stdio.h>
int main()
{
    int i, j, k, l;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf("  ");
        }
        for (k = i; k <= 5; k++)
        {
            printf("* ");
        }
        for (l = 1; l <= 5 - i; l++)
        {
            printf("* ");
        }

        printf("\n");
    }
}
#include <stdio.h>
int main()
{
    int i, j, k,l=0;
    for (i = 65; i <= 71; i++)
    {
        for (j = 65; j < i; j++)
        {
            printf(" ");
        }
       
        for (k = 65; k <136-i; k++)
        {
            printf("%c ", k);
        }

        printf("\n");
    }
}
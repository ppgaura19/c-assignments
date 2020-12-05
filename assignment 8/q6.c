#include <stdio.h>

#include <string.h>

int main()
{
    char A[100], B[100];

    int i = 0, j = 0, p;

    printf("enter the string\n");

    gets(A);

    p = strlen(A);

    for (i = p-1; i != -1; i--)
    {
        B[j] = A[i];
        j++;
    }

    B[j] = '\0';
    
    puts(B);
}
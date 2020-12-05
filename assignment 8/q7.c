#include <stdio.h>

#include <string.h>

int main()

{
    char A[100];

    int i = 0, s = 0, p;

    printf("enter the string\n");

    gets(A);

    p = strlen(A);
    int t = 0;
    for (i = 0; i < p; i++)
    {
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o'
         || A[i] == 'u' || A[i] == 'A' || A[i] == 'E' || A[i] == 'I'
         || A[i] == 'O' || A[i] == 'U')
        {
            s = s + 1;
            t = 1;
        }
    }
    if (t == 1)
        printf("number of vowel in given string is %d", s);

    if (t == 0)
        printf("given string has no vowel");
}
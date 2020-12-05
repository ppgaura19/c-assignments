#include <stdio.h>

#include <string.h>

int main()
{

    char first[100], second[100], outstr[100];
    
    int i = 0, j = 0;

    printf("enter first string\n");

    gets(first);

    printf("enter second string\n");

    gets(second);

    while (first[i] != '\0')
    {
        outstr[i] = first[i];
        i = i + 1;
    }

    while (second[j] != '\0')
    {
        outstr[i] = second[j];
        j = j + 1;
        i = i + 1;
    }
    printf("after add\n");
    outstr[i] = '\0';

    puts(outstr);

    return 0;
}
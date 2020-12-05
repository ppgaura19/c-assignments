#include <stdio.h>
#include <string.h>
int main()
{

    char instr[100], outstr[100];

    printf("enter the string\n");

    gets(instr);

    strcpy(outstr,instr);

    puts(outstr);

    return 0;
}   
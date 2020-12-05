#include <stdio.h>
#include <string.h>
int main()
{

    char instr[100], outstr[100];
    int i = 0;

    printf("enter the string\n");

    gets(instr);
    while (instr[i] != '\0')
    {
        if (instr[i] >= 'A' && instr[i] <= 'Z')
            outstr[i] = instr[i] + 32;

        else if (instr[i] >= 'a' && instr[i] <= 'z')
        {
            outstr[i] = instr[i] - 32;
        }
        i = i + 1;
    }
    outstr[i] = '\0';

    puts(outstr);

    return 0;
}
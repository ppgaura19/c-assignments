#include <stdio.h>
int main()
{
    char ch;
    printf("\nEnter the character: ");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
        printf("\n lower case is %c", ch + 32);
    else if (ch >= 97 && ch <= 122)
        printf("\n upper case is %c", ch - 32);
    return 0;
}
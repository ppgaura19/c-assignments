#include <stdio.h>
int main()
{
    char ch;
    printf("\nEnter the character: ");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
        printf("\n%c is uppercase", ch);
    else if (ch >= 97 && ch <= 122)
        printf("\n%c is lowercase", ch);
    else if (ch >= 48 && ch <= 57)
        printf("\n %c is a digit", ch);
    else
        printf("\n %c is a special character", ch);
    return 0;
}
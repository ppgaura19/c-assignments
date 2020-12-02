#include <stdio.h>
void main()
{
    char k;
    printf("Enter a letter\n");
    scanf("%c", &k);
    if (64 < k && k < 91 || 96 < k && k < 123)
        switch (k)
        {
        case 'A':
            printf("VOWEL");
            break;
        case 'E':
            printf("VOWEL");
            break;
        case 'I':
            printf("VOWEL");
            break;
        case 'O':
            printf("VOWEL");
            break;
        case 'U':
            printf("VOWEL");
            break;
        case 'a':
            printf("VOWEL");
            break;
        case 'e':
            printf("VOWEL");
            break;
        case 'i':
            printf("VOWEL");
            break;
        case 'o':
            printf("VOWEL");
            break;
        case 'u':
            printf("VOWEL");
            break;
        default:
            printf("CONSONENT");
        }
    else
        printf("not a valid alphabet");
}
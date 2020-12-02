#include <stdio.h>
void main()
{
    char grade;
    printf("Enter grade symbol\n");
    scanf("%c", &grade);
    switch (grade)
    {
    case 'O':
        printf("Outstanding");
        break;
    case 'A':
        printf("Excellent");
        break;
    case 'B':
        printf("Good");
        break;
    case 'C':
        printf("Fair");
        break;
    case 'F':
        printf("Fail");
        break;
    default:
        printf("Invalid Grade");
    }
}
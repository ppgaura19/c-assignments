#include <stdio.h>
int main()
{
    int a;
    printf("all the leap years between 1900 and 2100 are;\n\n ");
    for (a = 1900; a <= 2100; a++)
    {
        if (a % 400 == 0)
            printf("\n %d", a);
        else if
         (a % 100 != 0 && a % 4 == 0)
         printf("\n %d", a);
             
    }
    return 0;
}
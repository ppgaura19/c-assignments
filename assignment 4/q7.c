#include <stdio.h>
int main()
{
    int n, a, s = 0;
    printf("enter a number");
    scanf("%d", &n);
    if (n == 1)
        printf("neither prime nor composite");
    else
    {
        for (a = 2; a < n; a++)
        {
            if (n % a == 0)
            {
                s = 1;
                break;
            }
        }
        if (s == 0)
            printf("no is prime");
        else
            printf("no is composite");
    }
    return 0;
}
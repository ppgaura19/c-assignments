#include <stdio.h>
int main()
{
    int n, a;
    float  s = 0;
    printf("enter the number");
    scanf("%d", &n);

    for (a = 1; a <= n; a++)
    {
        s = (a /(1.0* (a + 1))) + s;
    }
    printf("sum is %f", s);
    return 0;
}
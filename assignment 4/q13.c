#include <stdio.h>
int main()
{
    int n, r = 0, s, t;
    printf("enter the number");
    scanf("%d", &n);
    t = n;
    for (; n != 0;)
    {
        s = n % 10;
        r = r + s*s*s;
        n = n / 10;
    }
    printf("%s\n", r == t ? "yes" : "no");
    return 0;
}
#include <stdio.h>
int main()
{
    float cp, sp, loss, profit, a, b;
    printf("enter cost price \n");
    scanf("%f", &cp);
    printf("enter selling price \n");
    scanf("%f", &sp);
    profit = (sp - cp);
    loss = (cp - sp);
    a = (profit / cp) * 100;
    b = (loss / cp) * 100;
    if (sp > cp)
        printf("you made profit of amount %f and your profit %% is %f ", profit, a);
    else if (sp < cp)
        printf("you made loss of amount %f and your loss %% is %f ", loss, b);
    else
        printf("you have made neither profit and nor loss");
    return 0;
}
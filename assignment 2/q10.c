#include <stdio.h>
int main()
{
    char name[20];
    float m1, m2, m3, m4, m5, total, percentage;
    printf("your name\n");
    scanf("%s", &name);
    printf("your number in 5 subject\n ");
    scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);
    printf("name is:%s\n", name);
    total = m1 + m2 + m3 + m4 + m5;
    printf("total marks is %0.2f\n", total);
    percentage = total / 5;

    printf("percentage is %0.2f %%\n", percentage);
    if (percentage < 33)
        printf("fail");
    else
        printf("pass");
    return 0;
}

#include <stdio.h>
#include <math.h>
int main() {

    float a,b;
    printf(" which of the two is greater:\n ");
	scanf("%f",&a);
	scanf("%f",&b);
	if (a<b)
	a=((a+b)+(b-a))/2;
  printf("greater of two is %f",a);
  return 0;
}

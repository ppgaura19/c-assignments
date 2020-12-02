#include <stdio.h>
#include <math.h>
int main() {

    float a,b;
    printf(" give two numberr:\n ");
	scanf("%f",&a);
	scanf("%f",&b);
a=a+b;
b=a-b;
a=a-b;
  printf("result is %f and %fis",a,b);
  return 0;
}
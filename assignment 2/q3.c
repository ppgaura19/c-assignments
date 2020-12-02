#include <stdio.h>
#include <math.h>
int main() {

    float p,r,t;
    float SI;
    printf(" PRINCIPAL,RATE AND TIME ARE:\n ");
	scanf("%f",&p);
	scanf("%f",&r);
	scanf("%f",&t);
	SI= (p*r*t)/100;
  printf("Simple Interest is %f",SI);
  return 0;
}
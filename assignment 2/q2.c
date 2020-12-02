#include <stdio.h>
#include <math.h>
int main() {

    float r,h;
    float c = 3.14;
    float Volume;
    printf(" radius and height are:\n ");
	scanf("%f",&r);
	scanf("%f",&h);
	Volume= (c*r*r*h)/3;
  printf("%f",Volume);
  return 0;
}
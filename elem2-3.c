#include <stdio.h>
#include <math.h>
int main() {
  float pi;
  int i;
  int max=40000;
  pi=0.0;
  
  for (i=1;i<=max;i=i+2)
    if ((i/2)%2) pi=pi-4.0/i;
    else pi=pi+4.0/i;
  printf ("%f\n\n", pi);

}

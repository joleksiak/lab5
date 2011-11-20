#include <stdio.h>
#include <math.h>

int main() {
  int i,j;
  float pp;
  int max=1000;
  max=max/2;
		
   for (i=1;i<max;i++)
    for (j=i;j<max;j++) {
    pp=sqrt(i*i+j*j);
    if ((pp-(int)pp)==0.0)
      if (i+j+pp<1000) printf ("%5d,%5d,%5d\n" ,i ,j ,(int)pp);

    }
   /* pp=sqrt(5);
  printf("%f\n" ,pp);
  printf("%d\n" ,int(pp+3));
   */
}

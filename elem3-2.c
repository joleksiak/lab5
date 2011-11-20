#include <stdio.h>
#include <math.h>

int main() {
  int i;
  int max=14;
  for (i=0;i<max;i++) printf("|-----");
  printf("|\n");
  for (i=0;i<max;i++) printf("|%3d  ",i+1);
  printf("|\n");
  for (i=0;i<max;i++) printf("|-----");
  printf("|\n");
  for (i=0;i<max;i++) printf("|%5.2f", sqrt(i+1));
  printf("|\n");
  for (i=0;i<max;i++) printf("|-----");
  printf("|\n");
  printf("\n");
  return 0;
}
	 

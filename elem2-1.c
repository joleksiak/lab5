#include <stdio.h>

int main() {
  int M;
  int suma = 0;
  int i = 1;
  int n;
  printf("Podaj liczbe M: ");
  scanf("%d", &M);
  while (suma < M) {
    printf("%d, %d, %d\n", suma, i, M);
     suma=suma+i;
     i=i+1;
  }
  n=i-1;
  printf("Szukane n to: %d\n ", n);
  return 0;
}

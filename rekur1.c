#include <stdio.h>

int main() {
  printf("%d\n", silnia(6));
}
int silnia(int n){
  int wynik;
  if (n==0) wynik= 1;
  else wynik=n*silnia(n-1);
  return wynik;
}

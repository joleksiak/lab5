#include <stdio.h>

int main() {
  /* deklaracje zmiennych */
  int jest_pierwsza, n, i;
  printf("Podaj liczbe calkowita: ");
  /* wczytaj tę liczbę do zmiennej n */
  /*printf("Podaj liczbę: ");*/
  scanf("%d", &n);
  /* sprawdź czy n jest liczbą pierwszą */
  if (n==1) jest_pierwsza=1;
  else {
  i=2;
  while ((n%i)&&(i*i<n)){i++;}
  if (i*i<=n) jest_pierwsza=0;
  else jest_pierwsza=1;
  }
  printf("Podana liczba '%d' jest %s\n",
    n, jest_pierwsza ? "pierwsza" : "złożona");
  return 0;
}

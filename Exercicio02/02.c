#include <stdio.h>

int main() {
  long int x, y, s;
  int n, i;
  double a;

  printf("Digite um número maior ou igual a 3: \n");
  scanf("%d", &n);

  if (n <= 2) {
    printf("Número inválido\n");
  }
  else {
    x = 1;
    y = 1;
    i = 2;
    printf("\n1 1 ");

    while(i < n) {
      s = x + y;
      a = s;
      a = a/y;
      printf("%ld ", s );
      x = y;
      y = s;
      i ++;
    }
  }

  return(0);
}
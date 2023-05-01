#include <stdio.h>

int main() {
  
  int n1, n2;

  printf("Escreva o primeiro número: ");
  scanf("%d", &n1);
  printf("Escreva o segundo número: ");
  scanf("%d", &n2);

  if (n1 > n2) {
    printf("O primeiro número é o maior");
  }
  else {
    printf("O segundo número é  maior");
  }

  return 0;
}

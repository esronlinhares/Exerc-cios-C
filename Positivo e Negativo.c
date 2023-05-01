#include <stdio.h>

int main() {
  
  int x;

  printf("Escreva o o valor: ");
  scanf("%d", &x);

  if (x >= 0) {
    printf("O número é positivo");
  }
  else {
    printf("O número é negativo");
  }

  return 0;
}

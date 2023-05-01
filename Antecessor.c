#include <stdio.h>

int main() {
  
  int valor = 0, antecessor = 0;

  printf("Escreva o número: ");
  scanf("%d", &valor);

  antecessor = valor - 1;

  printf("O antecessor é: %2.d", antecessor);

  return 0;
}

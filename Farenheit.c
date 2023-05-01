#include <stdio.h>

int main() {
  
  float tf, tc;

  printf("Escreva a temperatura em Farenheit: ");
  scanf("%f", &tf);

  tc = (tf - 32)/9;

  printf("A temperatura em Celsius e: %2.f", tc);

  return 0;
}

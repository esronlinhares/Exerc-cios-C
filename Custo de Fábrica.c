#include <stdio.h>

int main() {
  
  float custoFab, custoDis, custoImp, custoFin;

  printf("Escreva o valor do custo de fábrica: ");
  scanf("%f", &custoFab);

  custoDis = (custoFab * 0.28);
  custoImp = (custoFab * 0.45);
  custoFin = (custoFab + custoDis + custoImp);

  printf("O valor final do carro é: %2.2f", custoFin);

  return 0;
}

#include <stdio.h>

int main() {
  
  float largura, comprimento, area, perimetro;

  printf("Escreva a largura do retangulo: ");
  scanf("%f", &largura);
  printf("Escreva o comprimento do retangulo: ");
  scanf("%f", &comprimento);

  area = (largura * comprimento);
  perimetro = (largura + comprimento) * 2;

  printf("A area do retangulo e: %2.1f\nO perimetro do retangulo e: %2.1f", area, perimetro);

  return 0;
}

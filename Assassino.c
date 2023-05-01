#include <stdio.h>

int main() {

  float r1, r2, r3, r4, r5, respostas;

  printf("Telefonou para a vítima? ");
  scanf("%f", &r1);
  if (r1==1) {
      respostas++;
  }

  printf("Esteve no local do crime? ");
  scanf("%f", &r2);
  if (r2==1) {
      respostas++;
  }

  printf("Mora perto da vítima? ");
  scanf("%f", &r3);
  if (r3==1) {
      respostas++;
  }

  printf("Devia para a vítima? ");
  scanf("%f", &r4);
  if (r4==1) {
      respostas++;
  }

  printf("Já trabalhou com a vítima? ");
  scanf("%f", &r5);
  if (r5 == 1) {
      respostas++;
  }

  if (respostas == 5) {
      printf("Assassino");
  }

  if (respostas < 5 ) {
      printf("Cumplice");
  }

  if (respostas == 2) {
      printf("Suspeito");
  }

  if (respostas >= 0 && respostas < 2) {
      printf("Inocente");
  }

  return 0;
}

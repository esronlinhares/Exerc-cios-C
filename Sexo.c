#include <stdio.h>

int main() {
  
  char sexo;

  printf("Escreva o sexo: ");
  scanf("%c", &sexo);

  if (sexo == 'f' || sexo == 'F') {
    printf("Feminino");
  }
  else if(sexo == 'm' || sexo == 'M') {
    printf("Masculino");
  }
  else {
    printf("Sexo Inválido");
  }

  return 0;
}

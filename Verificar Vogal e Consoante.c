#include <stdio.h>

int main() {
  
  char letra;

  printf("Escreva a letra: ");
  scanf("%c", &letra);

  if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
    printf("Vogal");
  }
  else {
    printf("Consoante");
  }

  return 0;
}

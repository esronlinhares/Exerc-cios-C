#include <stdio.h>

int main() {
  
  float n1, n2, media;

  printf("Digite a primeira nota: ");
  scanf("%f", &n1);
  printf("Digite a segunda nota: ");
  scanf("%f", &n2);

  media = (n1 + n2) / 2;

  if (media == 10) {
      printf("O aluno esta aprovado com distinção com média %.2f", media);
  }
  else if (media >= 7) {
      printf("O aluno esta aprovado com media %.2f", media);
  }
  else if (media >= 5) {
      printf("O aluno esta em recuperação com media %.2f", media);
  }
  else {
      printf("O aluno esta reprovado com media %.2f", media);
  }

  return 0;
}

#include <stdio.h>

int main() {
    float altura, peso, imc;
    
    printf("Escreva o peso da pessoa: ");
    scanf("%f", &peso);
    
    printf("Escreva a altura da pessoa: ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    printf("O IMC da pessoa e: %2.f", imc);

    return 0;
}

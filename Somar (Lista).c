#include <stdio.h>

int main() {
    int lista[] = {12, 10, 23, 25, 40, 31, 8, 4, 13, 41, 23, 5};
    int x, y, soma;

    printf("Escolha um slot de 0 A 11: ");
    scanf("%d",&x);
    printf("Escolha um slot de 0 A 11: ");
    scanf("%d",&y);
    
    soma = (lista[x] + lista[y]);
    
    printf("A soma dos valores é: %d", soma);

    return 0;
}

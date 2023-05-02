#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define quantidadeCadastro 10

void inicializar(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
}
typedef struct{
   int n;
   char nome[51];
   int idade;
   float peso;
   float altura;
   char endereco[51];

}Paciente;
Paciente pacientes[quantidadeCadastro];
void Read(){
    system("cls");
    printf("====Lista de Cadastro!!!====\n");
   for(int i = 0; i < quantidadeCadastro; i++)
   {
        if(pacientes[i].n <= 0)
        {
            printf("====Cadastro Listado!!!====\n");
            system("pause");
            break;
        }
        printf("Número do Cadastro: %d\n",pacientes[i].n);
        printf("Nome: %s\n",pacientes[i].nome);
        printf("Idade: %d\n",pacientes[i].idade);
        printf("Peso: %.2f\n",pacientes[i].peso);
        printf("Altura: %.2f\n",pacientes[i].altura);
        printf("Endereço: %s\n\n\n",pacientes[i].endereco);
   }
}
void Update(int i){
    Escolha:
    system("cls");
    printf("Número do Cadastro: %d\n",pacientes[i].n);
    printf("Nome: %s\n",pacientes[i].nome);
    printf("Idade: %d\n",pacientes[i].idade);
    printf("Peso: %.2f\n",pacientes[i].peso);
    printf("Altura: %.2f\n",pacientes[i].altura);
    printf("Endereço: %s\n\n\n",pacientes[i].endereco);

    printf("O que deseja modificar?\n");
    printf("1 - Nome\n");
    printf("2 - Idade\n");
    printf("3 - Peso\n");
    printf("4 - Altura\n");
    printf("5 - Endereço\n");

    int e;
    scanf("%d", &e);
    fflush(stdin);
    switch(e)
    {
        case 1:
            printf("Nome: ");
            gets(pacientes[i].nome);
        break;

        case 2:
            printf("Idade: ");
            scanf("%d", &pacientes[i].idade);
        break;

        case 3:
            printf("Peso: ");
            scanf("%f", &pacientes[i].peso);
        break;

        case 4:
            printf("Altura: ");
            scanf("%f", &pacientes[i].altura);
        break;

        case 5:
            printf("Endereço: ");
            gets(pacientes[i].endereco);
        break;

        default:
            printf("Escolha invalida, precione enter para escolher novamente");
            getc(stdin);
            fflush(stdin);
        goto Escolha;

    }
    Read();
}
void Access(int indice){

     pacientes[indice].n = indice + 1;
     system("cls");

     printf("=====Cadastro de Paciente=====\n");
     printf("Número do cadastro: %d\n", pacientes[indice].n);

     printf("Nome: ");
     gets(pacientes[indice].nome);
     fflush(stdin);

     printf("Idade: ");
     scanf("%d", &pacientes[indice].idade);

     printf("Peso: ");
     scanf("%f", &pacientes[indice].peso);

     printf("Altura: ");
     scanf("%f", &pacientes[indice].altura);

     fflush(stdin);
     printf("Endereço: ");
     gets(pacientes[indice].endereco);


     system("cls");
     printf("=======Cadastro Realizado com sucesso!!=======\n\n\n\n\n\n");
     system("pause");
}
void Delete(int indice, int **nP){

    for(int i = indice; i < quantidadeCadastro; i++){
        pacientes[i-1].n = pacientes[i].n - 1;

        for(int g = 0; g < 51; g++){
            pacientes[i-1].nome[g] = pacientes[i].nome[g];
            pacientes[i-1].endereco[g] = pacientes[i].endereco[g];
        }

        pacientes[i-1].idade = pacientes[i].idade;
        pacientes[i-1].peso = pacientes[i].peso;
        pacientes[i-1].altura = pacientes[i].altura;

    }
    system("cls");
    printf("=====Cadastro Atualizado====\n");
    system("pause");
    **nP = **nP - 1;
    Read();
}
void Media(int **nP){
    system("cls");
    float med = 0;
    for(int i = 0; i < quantidadeCadastro; i++){
        med+=pacientes[i].idade;
    }
        med = med/(**nP);
        printf("A média de idade dos Pacientes Cadastrados é %.2f anos\n",med);
        system("pause");
}
void Menores(){
    system("cls");
    int idade = 0;
    for(int i = 0; i < quantidadeCadastro; i++)
    {
        if(pacientes[i].idade < 18)
        {
            idade++;
        }
    }
    printf("A quantidade de pacietentes menores de idade é %d\n", idade);
    system("pause");

}
void Maiores(){

system("cls");
    int idade = 0;
    for(int i = 0; i < quantidadeCadastro; i++)
    {
        if(pacientes[i].idade > 60)
        {
            idade++;
        }
    }
    printf("A quantidade de pacietentes maiores de 60 anos é %d\n", idade);
    system("pause");
}
void Menu(int *nP){
    system("cls");
    printf("Escolha uma opção:\n");
    printf("1 - Cadastrar Paciente\n");
    printf("2 - Modificar Cadastro\n");
    printf("3 - Apagar Cadastro\n");
    printf("4 - Media de idades\n");
    printf("5 - Pacientes menores de idade\n");
    printf("6 - Pacientes acima de 60 anos\n");

    int n = 0;
    scanf("%d",&n);
    fflush(stdin);

    switch(n)
    {
        case 1:
            Access(*nP);
            *nP = *nP + 1;
        break;

        case 2:
            Read();
            int i;
            printf("\n\n Qual cadastro deseja modificar: ");
            scanf("%d", &i);
            i = i - 1;
            Update(i);
        break;

        case 3:
            Read();
            int es;
            printf("\n\n Qual cadastro deseja Apagar: ");
            scanf("%d", &es);
            Delete(es,&nP);
        break;

        case 4:
            Media(&nP);
        break;

        case 5:
            Menores();
        break;

        case 6:
            Maiores();
        break;

        default:
            system("cls");
            printf("Opção Invalida!\n");
            system("pause");
        break;
    }
}
int main(){
    int numeroPaciente = 0;
    inicializar();
    while(1)
    {
        Menu(&numeroPaciente);
    }

    return 0;
}

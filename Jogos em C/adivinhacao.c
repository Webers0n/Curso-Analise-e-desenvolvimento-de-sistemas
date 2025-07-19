#include <stdio.h>

int main()
{
    printf("*************************************\n");
    printf("* Bem-vindo ao Jogo de Adivinhação *\n");
    printf("*************************************\n");
    int numeroSecreto, chute, contador;

    numeroSecreto = 42;
    printf("Qual eh o seu chute?");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    contador = 0;

    while (chute != numeroSecreto)
    {
        printf("Tente Novamente!\n");
        printf("Qual eh o seu chute?");
        scanf("%d", &chute);
        printf("\n");
        contador++;
    }

    printf("******************************\n");
    printf("*** Parabens voce ganhou!! ***\n");
    printf("*** Qnt/Tentativas: %d ********\n", contador);
    printf("******************************\n");


    




}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int notas[4];
    int soma;
    char encerrar;

    soma = 0;

    for (int i = 0; i < 4; i++)
    {
        while (notas[i] < 0 || notas[i] > 10)
        {
            printf("Nota[ %i ]:", notas[i]);
            scanf("%i", &notas[i]);
        }
        soma += notas[i];
    }

    float media = soma / 4;
    printf("\nTotal/Nota: %0.2f ", media);
    printf("Pressione qualquer tecla para encerrar!!");
    scanf("%c", &encerrar);
    
}
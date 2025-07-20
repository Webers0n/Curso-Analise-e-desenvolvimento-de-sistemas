/*
2 - Soma dos números pares

Peça um número N e calcule a soma de todos os números pares de 1 até N.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, soma;
    soma = 0;

    printf("Numero: ");
    scanf("%d", &num);
    printf("***********************\n");

    for (int i = 0; i <= num; i++)
    {

        if (i % 2 == 0)
        {
            printf("Numero Pares: %d\n", i);
            soma += i;
        }
    }
    printf("***********************\n");
    printf("Soma dos números pares: %d\n", soma);
}

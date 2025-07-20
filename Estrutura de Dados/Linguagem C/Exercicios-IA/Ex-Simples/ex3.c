// 3. Tabuada
// Peça um número e mostre a tabuada dele (1 a 10) usando for.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, total;
    int opcao;

    printf("Escolha a operação para gerar a tabuada:\n");
    printf("1 - Multiplicação\n2 - Subtração\n3 - Soma\n4 - Divisão\n");+   
    printf("Digite a opção [1 a 4]: ");
    scanf("%i", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Numero: ");
        scanf("%f", &num);
        /* Multiplicação */
        for (int i = 0; i <= 10; i++)
        {
            total = num * i;
            printf("%2.f x %i = %2.f \n", num, i, total);
        };
        break;

    case 2:
        /* Subtração */
        printf("Numero: ");
        scanf("%f", &num);
        for (int i = 0; i <= 10; i++)
        {
            total = num - i;
            printf("%2.f - %i = %2.f \n", num, i, total);
        };
        break;
    case 3:
        /* Soma */
        printf("Numero: ");
        scanf("%f", &num);
        for (int i = 0; i <= 10; i++)
        {
            total = num + i;
            printf("%2.f + %i = %2.f \n", num, i, total);
        };
        break;
    case 4:
        /* Divisão */
        printf("Numero: ");
        scanf("%f", &num);
        if (num != 0)
        {
            for (int i = 1; i <= 10; i++)
            {
                total = num / i;
                printf("%2.f / %i = %0.3f \n", num, i, total);
            };
        }
        else
        {
            printf("Erro: Divisão por zero não é permitida!\n");
        }
        break;
    default:
        printf("Opção inválida! Por favor, digite um número de 1 a 4.\n"); 
        break;
    }
}
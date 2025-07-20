#include <stdio.h>

int main()
{
    int opcao;
    float numero, total;

    printf("1 - Multiplicação\n2 - Subtração\n3 - Soma\n4 - Divisão\n0 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite o primeiro número: ");
        scanf("%f", &total);
        if (total == 0) {
            printf("Resultado final: 0\n");
            break;
        }
        do
        {
            printf("Digite um número para multiplicar (0 para encerrar): ");
            scanf("%f", &numero);

            if (numero == 0)
                break;

            total *= numero;
            printf("Total atual: %.2f\n", total);

        } while (1);

        printf("Resultado final da multiplicação: %.2f\n", total);
        break;

    case 2:
        printf("Digite o primeiro número: ");
        scanf("%f", &total);
        do
        {
            printf("Digite um número para subtrair (0 para encerrar): ");
            scanf("%f", &numero);

            if (numero == 0)
                break;

            total -= numero;
            printf("Total atual: %.2f\n", total);

        } while (1);

        printf("Resultado final da subtração: %.2f\n", total);
        break;

    case 3:
        printf("Digite o primeiro número: ");
        scanf("%f", &total);
        do
        {
            printf("Digite um número para somar (0 para encerrar): ");
            scanf("%f", &numero);

            if (numero == 0)
                break;

            total += numero;
            printf("Total atual: %.2f\n", total);

        } while (1);

        printf("Resultado final da soma: %.2f\n", total);
        break;

    case 4:
        printf("Digite o primeiro número: ");
        scanf("%f", &total);
        do
        {
            printf("Digite um número para dividir (0 para encerrar): ");
            scanf("%f", &numero);

            if (numero == 0)
                break;

            if (numero == 0) {
                printf("Erro: divisão por zero!\n");
                continue;
            }

            total /= numero;
            printf("Total atual: %.2f\n", total);

        } while (1);

        printf("Resultado final da divisão: %.2f\n", total);
        break;

    case 0:
        printf("Programa encerrado.\n");
        break;

    default:
        printf("Opção inválida.\n");
        break;
    }

    return 0;
}

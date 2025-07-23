#include <stdio.h>

int main()
{
    int lista[2][2];

    // Preenchendo a matriz
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Digite elemento [%d][%d]: ", i, j);
            scanf("%d", &lista[i][j]); 
        }
    }

    // Imprimindo a matriz
    printf("\nMatriz:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Elemento [%d][%d] = %d\n", i, j, lista[i][j]);
        }
    }

    return 0;
}

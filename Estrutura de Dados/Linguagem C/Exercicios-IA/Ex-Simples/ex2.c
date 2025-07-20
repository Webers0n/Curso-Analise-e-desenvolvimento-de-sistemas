#include <stdio.h>
#include <stdlib.h>

int main (){
      // 2 - Verificação de Par ou Impar
    //Leia um número inteiro e informe se ele é par ou ímpar.


    float num1, num2,soma;

    soma = 0;
    
    printf("Numero[1]: ");
    scanf("%f", &num1);
    printf("Numero[2]: ");
    scanf("%f", &num2);
    
    if ((int)soma % 2 != 0)
    {
        printf("e impar\n");
    }
    else
    {
        printf("e Par\n");
    }
}
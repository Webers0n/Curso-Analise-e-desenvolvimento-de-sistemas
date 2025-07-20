/*
1 - Contagem regressiva

Leia um número e faça uma contagem regressiva até zero usando while.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    

    printf("Numero: ");
    scanf("%d", &num);

    while (num > 0)
    {   
        
        printf("%d \n", num);
        num--;
    }
}
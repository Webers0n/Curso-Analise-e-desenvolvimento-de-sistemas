/*
4 - Maior de três números
    Leia três números e exiba qual é o maior.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;

    printf("numero[1]:");
    scanf("%i", &num1);
    printf("numero[2]:");
    scanf("%i", &num2);
    printf("numero[3]:");
    scanf("%i", &num3);

    if (num1 >= num2 && num1 >= num3) 
    {
        printf("O numero %i e maior\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("O numero %i e maior\n", num2);
    }
    else
    {
        printf("O numero %i e maior\n", num3);
    }
}
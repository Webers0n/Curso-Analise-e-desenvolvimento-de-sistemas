/*
5 - Conversão de temperatura

    Leia uma temperatura em graus Celsius e converta para Fahrenheit.

*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    float grau, fahren;

    printf("Grau Celsius ( °C ): ");
    scanf("%f", &grau);

    fahren = (grau * 9 / 5) + 32;

    printf("Grau Fahrenheit: %02.2f °F\n", fahren);

    return (0);
}
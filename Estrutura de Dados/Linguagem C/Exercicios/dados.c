#include <stdio.h>
#include <stdlib.h>


int main()
{
    char nome[50], sobrenome[50];
    int idade;
    float altura;
    printf("Informe qual o seu primeiro nome : ");
    scanf("% s", &nome);
    printf("Informe qual o seu sobrenome : ");
    scanf("% s", &sobrenome);
    printf("Informe a sua idade : ");
    scanf("% d", &idade);
    printf("Informe sua altura : ");
    scanf("% f", &altura);
    system("cls"); // limpa a tela para a impressão dos dados - Windows
    // system("clear"); // limpa a tela para a impressão dos dados - linux
    printf("Nome e sobrenome do usuario : % s % s \n", nome, sobrenome);
    printf("Idade do usuario : % d \n", idade);
    printf("Altura do usuario : % .2f \n", altura);

    printf("\n\nPressione Enter para encerrar...");
    getchar(); // lê o \n do último scanf
    getchar(); // espera o usuário apertar Enter
    return (0);
}
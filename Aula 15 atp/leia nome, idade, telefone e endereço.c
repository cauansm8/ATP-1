#include <stdio.h>
    int main (){

    char nome[100], endereco[100];
    int idade, telefone;

    printf ("Informe seu nome: ");
    gets (nome);

    printf ("Informe sua idade: ");
    scanf ("%d",&idade);

    getchar();

    printf ("Informe seu endereco: ");
    gets (endereco);

    printf ("Informe seu telefone: ");
    scanf("%d",&telefone);


    printf ("Nome: %s Idade: %d Endereco: %s Telefone: %d",nome,idade,endereco,telefone);





return 0;
}

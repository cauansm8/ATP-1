#include <stdio.h>
    int main (){

    char nome[30], endereco[100];
    int idade, telefone;

    printf ("Informe seu nome: ");
    gets (nome);

    fflush (stdin);


    printf ("Informe sua idade: ");
    scanf ("%d",&idade);


    fflush (stdin);

    printf ("Informe seu endereco: ");
    fgets (endereco, 100, stdin);

    fflush (stdin);

    printf ("Informe seu telefone: ");
    scanf ("%d",&telefone);

    printf ("\n%s |",nome);
    printf (" %d anos |",idade);
    printf (" %d |",telefone);
    printf (" %s",endereco);



return 0;
}

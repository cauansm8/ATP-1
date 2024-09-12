#include <stdio.h>
    int main (){


    char nome[173],endereco[50];
    int idade;

    printf ("Informe o nome: ");
    fgets (nome, 173, stdin);

    fflush (stdin);

    printf ("Informe a idade: ");
    scanf ("%d",&idade);

    fflush (stdin);

    printf ("Informe o endereco: ");
    fgets (endereco, 50, stdin);

    printf ("\n %s %d anos\n %s\n",nome,idade,endereco);









return 0;
}

#include <stdio.h>
#include <string.h>
    int main (){

    int qnt, i=1, comparacao;
    printf ("Informe a quantidade de strings: ");
    scanf ("%d",&qnt);

    fflush (stdin); ////// ou getchar

    char string[100], maior[100], menor[100];
    

    printf ("\nInforme uma string: ");
    gets (string);
    strcpy (menor, string); /////////// a primeira string � usada como base para menor e maior
    strcpy (maior, string); ///////////


    do{
    printf ("\nInforme uma string: ");
    gets (string);

    comparacao = strcmp (string, menor); ///////////////// comparca��o para ver se a nova string � menor

    if (comparacao<0){  //////////// se string < menor 
        strcpy (menor, string); ////////// menor = string
    }
    comparacao = strcmp (string, maior); /////////////// compara��o para ver se a nova string � maior

    if (comparacao>0){    /////////////// se string > maior
        strcpy (maior, string);  ///////// maior = string
    }


    i++;
    }
    while (i<qnt);


    printf ("\n A primeira e a ultima palavra: %s |||| %s\n", menor, maior);




return 0;
}

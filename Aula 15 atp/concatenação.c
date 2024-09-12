#include <stdio.h>
#include <string.h>
    int main (){

    char string_1[100], string_2[100], string12[200]="";

    printf ("Informe a primeira string: ");
    gets (string_1);
    strcat (string12, string_1); //////// strcat (string de destino, string que vai ser copiada o conteudo)

    printf ("\nInforme a segunda string: ");
    gets (string_2);


    strcat (string12, string_2);

    printf ("\nA string concatenada: %s\n",string12);





return 0;
}

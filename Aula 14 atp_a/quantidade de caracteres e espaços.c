#include <stdio.h>
    int main (){

    int i=0, carac=0, esp=0;

    char string[50];

    printf ("Informe uma string de ate 50 caracteres: ");
    fgets (string, 50, stdin);

    do{

    if (string[i]==' '){
        esp++;
    }
    else {
        carac++;
    }


    i++;

    }
    while (string[i]!='\0'); ///////////////// '\0' indica fim de string

    printf ("\nA quantidade de caracteres: %d",carac-1);
    printf ("\nA quantidade de espacos: %d",esp);






return 0;
}

#include <stdio.h>
    int main (){
    int ano;
    printf ("Digite o ano: ");
    scanf ("%d",&ano);

    if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0) {
        printf ("Ano bissexto");
    }
    else {
        printf ("Ano nao-bissexto");
    }






return 0;
}

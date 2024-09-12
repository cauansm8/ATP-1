#include <stdio.h>
#include <string.h>
    int main (){
    char string_o[100],string_d[100];

    printf ("Informe uma string: ");
    fgets (string_o,100,stdin);

    strcpy (string_d,string_o);

    printf ("\nA string transferida: %s",string_d);










return 0;
}

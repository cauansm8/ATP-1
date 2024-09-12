#include <stdio.h>
    int main (){

    char string_1[100], string_2[100];
    int i=0;
    printf ("Informe uma string: ");
    fgets (string_1,100,stdin);

    do{
    string_2[i] = string_1[i];



    i++;

    }
    while (string_1[i]!='\0');

    printf ("\nA frase copiada: %s\n",string_2);





return 0;
}

#include <stdio.h>
    int main (){

    char string[50],n_string[50];
    int i=0;

    printf ("Informe uma string: ");
    fgets (string, 50, stdin);

    do{
        if (string[i]=='a' || string[i]=='A' || string[i]=='e' || string[i]=='E' || string[i]=='i' || string[i]=='I' || string[i]=='o' || string[i]=='O' || string[i]=='u' || string[i]=='U'){
        n_string[i] = '_';




    }
        else {
        n_string[i] = string[i];
        }





    i++;
    }
    while (i<50);

    printf ("\n%s",n_string);



return 0;
}

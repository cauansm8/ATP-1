#include <stdio.h>
    int main (){
    char string1[50],string2[50];
    int i=0,z=0;


    printf ("Informe a string1: ");
    gets (string1);

    printf ("Informe a string2: ");
    gets (string2);

    do{
    if (string1[i]=='\0'){
        string1[i] = string2[z];
        z++;
    }
    i++;




    }
    while (string2[z]!='\0');
    printf ("\nA concatenacao: %s\n",string1);



return 0;
}

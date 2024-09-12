#include <stdio.h>
#include <string.h>

int main (){

    int i=0;
    char string[100], n_string[100];
    printf ("Informe uma string: ");
    fgets (string,100,stdin);

    do{
        if (string[i]>='a' && string[i]<='z'){
            n_string[i] = string[i] - 32;
        }
        else {
            n_string[i] = string [i];
        }
        i++;

    }
    while (string[i]!= '\0');

    printf ("\nFrase alterada: %s\n",n_string);


return 0;
}

#include <stdio.h>
    int main (){

    char string1[50];
    int i=0, i_2=0, l_s=0; //// letras e espaços


    printf ("Informe uma string: ");
    gets (string1);

    do{
    i++;
    l_s++;



    }
    while (string1[i]!='\0');

    printf ("\n%d letras + espacos\n",l_s);


    l_s = l_s - 1;

    do {
    if (string1[i_2] != string1[l_s]){
        printf ("\nNao e palindromo\n");
        return 1;
    }

    else {
    i_2++;
    l_s--;
    }
    }



    while (string1[i_2] != '\0' );

    printf ("\nE palindromo\n");





return 0;
}

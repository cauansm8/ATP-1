#include <stdio.h>
    int main (){

    int quantidade;
    printf ("Informe a quantidade de elementos da string: ");
    scanf ("%d",&quantidade);

    fflush (stdin);

    char string[quantidade];
    printf ("Informe a string com %d elementos : ",quantidade);


    gets (string);

    printf ("\n%c\n",string[quantidade-3]);
    printf ("%c\n",string[quantidade-2]);
    printf ("%c\n",string[quantidade-1]);






return 0;
}

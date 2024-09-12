#include <stdio.h>
    int main (){

    char string[20],l1,l2, n_string[20];

    int i=0;

    printf ("Informe uma string: ");
    fgets (string, 20, stdin);

    printf ("Informe a letra que voce quer trocar: ");
    scanf (" %c",&l1); ////////////// usa o espaço para para ignorar o caracter de "\n"


    printf ("Informe a letra que voce quer colocar: ");
    scanf (" %c",&l2);

    printf ("A nova string: ");

    do{
    if (string[i]==l1){
        string [i] = l2;
    }





    i++;
    }
    while (i<20);

    printf ("\nA nova string: %s",string);



return 0;
}

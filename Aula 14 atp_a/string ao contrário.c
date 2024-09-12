#include <stdio.h>
    int main (){

    int qnt;
    printf ("Informe a quantidade de caracteres da string: ");
    scanf ("%d",&qnt);
    qnt = qnt + 1;
    fflush (stdin);

    char string[qnt];
    int i=qnt-1;

    printf ("Informe uma string: "); //////////////// 6 -> c_a_l_i_c_a
    fgets (string, qnt, stdin);

    do{
    printf ("%c",string[i]);



    i--;


    }
    while (string[i]!='\0');



return 0;
}

#include <stdio.h>
#include <string.h>
    int main (){

    char string1[100], string2[100];

    printf ("Informe a primeira string: ");
    gets (string1);

    printf ("Informe a segunda string: ");
    gets (string2);

    int x = strcmp(string1,string2);
    printf ("\nResultado: %d\n",x);

    if (x==0){
        printf ("\nSao iguais\n");
    }
    if (x==-1 || x==1){
        printf ("\nNao sao iguais\n");
    }






return 0;
}

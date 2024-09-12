#include <stdio.h>
    int main (){

    char palavra [16], x,i=0;

    printf ("Sua palavra: ");
    fgets (palavra, 16, stdin);

    printf ("Infome qual caracter voce quer verificar se ha: ");
    scanf ("%c",&x);

    do{
    if (palavra[i]==x){
        printf ("O caracter %c esta na palavra",x);
        return 0;
    }
    else {
        i++;
    }





    }
    while (palavra[i]!='\0');

    printf ("Nao ha %c na palavra",x);







return 0;
}

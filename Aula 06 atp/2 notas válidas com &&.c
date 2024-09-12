#include <stdio.h> /////////// nota válida com operador &
    int main (){
    int a,b;

    printf("Digite a nota 1: ");
    scanf ("%d",&a);
    printf("Digite a nota 2: ");
    scanf ("%d",&b);

    if (a>=0 && a<=10 && b>=0 && b<=10){
        printf ("Notas validas");


    }
    else {
        printf ("Alguma nota invalida");
    }






return 0;
}

#include <stdio.h> /////// número de 1 a 5
    int main (){
    int numero;
    printf ("Digite um numero de 1 a 5: ");
    scanf ("%d",&numero);
    if (numero <= 5) {

        if (numero == 1) {
            printf ("Numero: um");
        }
        else {}

        if (numero == 2 ){
            printf ("Numero: dois");
        }
        else {}

        if (numero == 3){
        printf ("Numero: tres");
        }
        else {}

        if (numero == 4){
           printf ("Numero: quatro");
        }
        else{}

        if (numero == 5){

        printf ("Numero: cinco");


        }
        else {}
    }
    else {
        printf ("Numero maior que 5 ou menor que 0");
    }

    return 0;
    }

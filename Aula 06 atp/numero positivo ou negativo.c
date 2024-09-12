#include <stdio.h> ///////////// o número é positivo ou negativo?
    int main (){

    int numero;
    printf ("Digite um numero negativo ou positivo: ");
    scanf ("%d",&numero);

    if (numero<0) {
        printf ("Numero negativo");
    }
    else {
        printf ("Numero nulo ou positivo");
    }




    return 0;
    }

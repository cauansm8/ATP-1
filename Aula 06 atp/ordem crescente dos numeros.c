#include <stdio.h> ///////// ordem crescente dos números
    int main (){

    int a, b;

    printf ("Digite o valor do primeiro numero: ");
    scanf ("%d",&a);

    printf ("Digite o valor do segundo numero: ");
    scanf ("%d",&b);

    if (a != b) {
        if (a<b){
        printf ("A ordem: %d,%d",a,b);
        }

        else {
        printf ("A ordem: %d,%d",b,a);
        }

    }
    else {
        printf ("Numeros iguais");
    }







    return 0;
    }

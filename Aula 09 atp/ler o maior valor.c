#include <stdio.h> ////////// maior valor
    int main (){
    int contador=1;
    float maior, n;
    printf ("Digite o 1valor: ");
    scanf ("%f",&n);
    maior = n;
    while (contador < 5){
    printf ("Digite o %dvalor: ",contador+1);
    scanf ("%f",&n);
    if (maior < n){
        maior = n;
    contador++;

    }
    else {contador++;}
    }
    printf ("O maior valor: %.2f",maior);
return 0;
    }

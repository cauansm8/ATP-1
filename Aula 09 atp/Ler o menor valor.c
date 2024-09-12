#include <stdio.h> ////////// maior valor
    int main (){
    int contador=1;
    float menor, n;
    printf ("Digite o 1valor: ");
    scanf ("%f",&n);
    menor = n;
    while (contador < 5){
    printf ("Digite o %dvalor: ",contador+1);
    scanf ("%f",&n);
    if (menor > n){
        menor = n;
    contador++;

    }
    else {contador++;}
    }
    printf ("O menor valor: %.2f",menor);
return 0;
    }

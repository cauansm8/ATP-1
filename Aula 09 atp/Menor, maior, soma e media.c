#include <stdio.h> ////////// maior valor
    int main (){
    int contador=1;
    float maior, n, menor, soma=0, media;
    printf ("Digite o 1valor: ");
    scanf ("%f",&n);
    maior = n;
    menor = n;
    while (contador < 5){
    printf ("Digite o %dvalor: ",contador+1);
    scanf ("%f",&n);
    soma = soma + n;


    if (maior < n){
        maior = n;
    }

    if (menor > n){
        menor = n;
    contador++;}

    else {contador++;}

    }


    printf ("O maior valor: %.2f",maior);
        printf ("\n");
    printf ("O menor valor: %.2f",menor);
            printf ("\n");
    printf ("A soma: %.2f",soma+maior);
    media = (soma+maior) / 5;
          printf ("\n");

    printf ("A media: %.2f",media);
return 0;
    }

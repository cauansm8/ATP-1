#include <stdio.h>
    int main (){
    int number, contador=1, maior, menor,soma=0;
    double media;
    printf ("Digite o numero 1: ");
    scanf ("%d",&number);
    maior = number;
    menor = number;
    soma = number;


    do {
        printf ("Digite o numero %d: ",contador+1);
        scanf ("%d",&number);
    if (number>maior){
        maior = number;
    }
    if (menor > number){
        menor = number;
    }



    soma = soma + number;
    contador++;

    }
    while (contador<5);

    media = soma / 5;

    printf ("O maior numero: %d",maior);
    printf ("\n");
    printf ("O menor numero: %d",menor);
    printf ("\n");
    printf ("A soma: %d",soma);
    printf ("\n");
    printf ("A media: %.2lf",media);
    printf ("\n");


return 0;
}

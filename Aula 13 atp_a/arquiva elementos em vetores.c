#include <stdio.h>
    int main (){
    int vetor[10], soma=0, i=0,num;

    do{
    printf ("Informe um elemento: ");
    scanf("%d",&num);
    vetor [i] = num;

    soma = soma + num;


    i++;

    }
    while (i<10);

    printf ("O vetor %d tem como soma %d",vetor[10],soma);








return 0;
    }

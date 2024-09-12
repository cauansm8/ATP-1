#include <stdio.h>
    int main (){


    int n, i=0;
    printf ("Informe a quantidade de elementos da sequencia de Fibonacci (tem que ser maior que 2): ");
    scanf ("%d",&n);

    if (n<=2) {
        return 1;
    }
    else {
    int vetor[n];
    vetor [1] = 1;
    vetor [2] = 1;

    do{
    vetor [i+3] = vetor[i+1] + vetor[i+2];

    printf ("O numero %d: %d\n",i+3,vetor[i+3]);





    i++;
    }
    while (i<n);

    }






return 0;
    }

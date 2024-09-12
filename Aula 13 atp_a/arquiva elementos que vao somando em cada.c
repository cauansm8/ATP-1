#include <stdio.h>
    int main (){


    int i=0, n, soma=0,i_2=0,x;
    printf ("Informe a quantidade de numeros: ");
    scanf ("%d",&n);
    int vetor [n];


    do {
        printf ("Informe um numero: ");
        scanf ("%d",&x);

        soma = soma + x;

        vetor[i] = soma;

        i++;





    }
    while (i<n);

    do {
        printf ("\n O vetor %d tem como valor:  %d\n",i_2,vetor[i_2]);



    i_2++;
    }
    while (i_2<n);


return 0;
}

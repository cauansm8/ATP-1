#include <stdio.h>
    int main (){

    int n,i=0,i_2=0,n_v;
    printf ("Informe a quantidade de elementos de 0 a 9: ");
    scanf ("%d",&n);


    int vetor[n];

    do{
    printf ("\nInforme um numero: ");
    scanf ("%d",&n_v);
    if (n_v > 9 || n_v<0){
        printf ("Numeros incorretos quanto ao intervalo");
        return 1;
    }
    else {
    vetor [i] = n_v;
    printf ("O vetor %d tem como valor: %d\n",i,vetor[i]);
    }

    i++;
    }
    while (i<n);








return 0;
}

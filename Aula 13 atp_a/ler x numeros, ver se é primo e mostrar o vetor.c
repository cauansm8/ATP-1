#include <stdio.h>
    int main (){
    int i=0, qnt,n,i_2=0,t=0;

    printf ("Informe a quantidade de numeros: ");
    scanf ("%d",&qnt);
    int v[qnt];
    do{

    printf ("\nInforme um numero: ");
    scanf ("%d",&n);
    v[i] = n;


    i++;
    }
    while (i<qnt);

    do{

    if ((v[i_2]%2 != 0) && (v[i_2]%3 != 0) && (v[i_2]%5 != 0) && (v[i_2] != 1)||(v[i_2]==2) || (v[i_2]==3) || (v[i_2]==5) ) {
        printf ("\nO numero %d do vetor %d e primo\n",v[i_2],i_2);

    }
    else {
        t++;
    }




    i_2++;
    }
    while (i_2<qnt);


return 0;
}

#include <stdio.h>
    int main (){

    int N, i=0,i_2=0,num,N1,N2;

    printf ("Informe a quantidade de numeros: ");
    scanf ("%d",&N);

    int v[N];

    do{
        printf ("\nInforme o numero: ");
        scanf ("%d",&num);
        v[i]= num;


    i++;
    }
    while (i<N);
    printf ("\nA ordem: ");
    do{
        printf ("%d ",v[i_2]);
        i_2++;
    }
    while (i_2<N);


    printf ("\nInforme algum numero que esteja na lista: ");
    scanf ("%d",&N1);

    printf ("\nInforme algum numero que esteja na lista: ");
    scanf ("%d",&N2);







return 0;
}

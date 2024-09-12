#include <stdio.h>
    int main (){

    int i=0,i_2=0,i_3=0,i_4=0, qnt,n,n1,n2;
    printf ("Informe a quantidade de numeros: "); ////////// quantidade de números
    scanf ("%d",&qnt);

    int v[qnt];

    do{

    printf ("\nInforme um numero: "); ///////////// numeros armazenados nos vetores
    scanf ("%d",&n);

    v[i] = n;





    i++;
    }
    while (i<qnt);
    do {

    printf ("%d ",v[i_2]); /////////////// a lista 1

    i_2++;
    }
    while (i_2<qnt);
    printf ("\nInforme algum numero que deseja trocar da lista: ");
    scanf ("%d",&n1);

    printf ("\nInforme algum numero que deseja inserir: ");
    scanf ("%d",&n2);

    do{
        if (v[i_3]==n1){ /////////////// troca do numero
            v[i_3] = n2;
        }
        else {


    i_3++;}
    }
    while (i_3<n);
    printf ("\nA lista alterada: "); //////////// a lista alterada
    do{
        printf ("%d ",v[i_4]);

    i_4++;
    }
    while (i_4<qnt);


return 0;
}

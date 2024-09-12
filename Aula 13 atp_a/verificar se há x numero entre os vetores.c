#include <stdio.h>
    int main (){


    int N, i=0, num,x,i_2=0;

    printf ("Informe a quantidade de numeros: ");
    scanf ("%d",&N);

    int v[N];
    do{
    printf ("\nInforme um numero: ");
    scanf ("%d",&num);
    v[i] = num;




    i++;
    }
    while (i<N);

    printf ("\nInforme o numero que voce quer verificar: ");
    scanf ("%d",&x);

    do{
        if (x==v[i_2]){
            printf ("\nO numero %d esta no vetor\n",x);
            return 0;
        }
        else {
            i_2++;
        }




    }
    while (i_2<N);

        printf ("\nO numero %d nao esta no vetor\n",x);


return 0;
}

#include <stdio.h>
    int main (){
    int a, contador=0, q_p=0, q_i=0;


    if (a == 0) {printf ("Fim");}
    else {

    while (a != 0){
    printf ("Digite o numero: ");
    scanf ("%d",&a);
    {
    if (a%2==0){
        q_p++;
    }
    else {
        q_i++;
    }
    }

    }
    }
    printf ("A quantidade de impares: %d",q_i);
    printf ("\n");
    printf ("A quantidade de pares: %d",q_p);
return 0;

    }

#include <stdio.h>
    int main (){
    int n, contador=0,q_p=0,q_i=0;

    do {
        printf("Digite o numero %d: ",contador+1);
        scanf ("%d",&n);

        if (n%2==0){
            q_p++;
        }
        else { q_i++;}
        contador++;
    }
    while (n!=0);

    printf ("A quantidade de pares: %d",q_p);
    printf ("\n");
    printf ("A quantidade de impares: %d",q_i);
    printf ("\n");



return 0;
}

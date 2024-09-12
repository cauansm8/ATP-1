#include <stdio.h>
    int main(){
    int a,q_p=0,q_i=0, contador;

    for (contador=0;a!=0;contador++){
        printf ("Digite o numero %d: ",contador+1);
        scanf ("%d",&a);
        if (a%2!=0){
            q_i++;
        }
        else { q_p++;}

    }
    printf ("A quantidade de pares: %d\n",q_p);
    printf ("A quantidade de impares: %d\n",q_i);


return 0;
}

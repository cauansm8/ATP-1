#include <stdio.h>
    int main (){
    int numero, contador,x;
    printf ("Informe o numero: ");
        scanf ("%d",&numero);

    for (contador=0;contador <=10; contador++){
        x = numero * contador;
        printf ("x%d: %d\n",contador,x);


    }




return 0;
}

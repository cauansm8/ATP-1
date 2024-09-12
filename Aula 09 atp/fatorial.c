#include <stdio.h>
    int main (){
    int n, resultado=1;

    printf ("Digite um numero: ");
    scanf ("%d",&n);


    while (n != 0){
    resultado = resultado * (n);
    n = n - 1;




    }
    printf ("O fatorial: %d",resultado);
;

return 0;
}

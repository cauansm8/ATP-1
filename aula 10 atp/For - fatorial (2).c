#include <stdio.h>
    int main (){
    int numero, fatorial=1, resultado, contador;
    printf ("Digite um numero: ");
    scanf ("%d",&numero);
    contador = numero;

    for (contador;contador>1; contador--){
    fatorial = contador*fatorial;



    }
    resultado = fatorial;
    printf ("O resultado do fatorial desse numero: %d",fatorial);

return 0;
}

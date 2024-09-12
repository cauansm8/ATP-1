#include <stdio.h>
    int main (){
    int n,fatorial=1,contador=0, resultado;
    printf ("Digite um numero: ");
    scanf ("%d",&n);
    if (n==0){
        printf ("O resultado do fatorial: 1");
    }
    else {
    do {
    fatorial = n * fatorial; /////////// n * variavel = fatorial
    n = n - 1;               /////////// (n-1)
                            //////////// loop com fatorial * (n-1)
    }
    while (n>1);
    resultado = fatorial; ///////// n * todos os (n-1)^x
    printf ("O resultado do fatorial: %d",resultado);}

return 0;
}

#include <stdio.h>
    int main (){
    int n, contador, soma=0;
    float media;

    for (contador = 0; contador < 5; contador++){
        printf ("Digite o numero %d: ",contador+1);
        scanf ("%d",&n);
        soma = soma + n;
    }
    media  = (float)soma / 5;
    printf ("A media: %.2f",media);

return 0;
}

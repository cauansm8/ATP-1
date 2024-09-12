#include <stdio.h>
    int main (){
    int n, quantidade, soma=0, contador;
    float media;

    printf ("Insira quantos valores vao compor a media: ");
    scanf ("%d",&quantidade);

    for (contador=0;contador<quantidade;contador++){
        printf ("Valor %d: ",contador+1);
        scanf ("%d",&n);
        soma = soma + n;

    }
    media = (float)soma / quantidade;
    printf ("A soma: %d\n",soma);
    printf ("A media: %.2f\n",media);


return 0;
}

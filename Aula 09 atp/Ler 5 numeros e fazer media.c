#include <stdio.h>
    int main (){
    int n, soma=0, contador =0;
    float media;

    while (contador < 5 ){
     printf("Digite o numero: ");
     scanf ("%d",&n);
     soma = soma + n;
     contador++;

    }
    media = soma / 5.0 ;
    printf ("A media: %f",media);
return 0;
}

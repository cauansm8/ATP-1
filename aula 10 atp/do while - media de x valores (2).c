#include <stdio.h>
    int main (){
    double numero,contador=0, soma=0 ,media;
    int valores;
    printf ("Digite quantos valores vao compor a media: ");
    scanf ("%d",&valores);
    do {
        printf ("Digite o numero: ");
        scanf ("%lf",&numero);
        soma = soma + numero;
        contador++;
    }
    while (contador<valores);
    media = soma / valores;
    printf ("A soma: %.2lf",soma);
    printf ("\n");
    printf ("A media dos 5 numeros: %.2lf",media);

return 0;
}

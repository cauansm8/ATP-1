#include <stdio.h>
    int main (){
    float numero,contador=0, soma=0 ,media;

    do {
        printf ("Digite o numero: ");
        scanf ("%f",&numero);
        soma = soma + numero;
        contador++;
    }
    while (contador<5);
    media = soma / 5;
    printf ("A soma: %.2f",soma);
    printf ("\n");
    printf ("A media dos 5 numeros: %.2f",media);

return 0;
}

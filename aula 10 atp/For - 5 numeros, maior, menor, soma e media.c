#include <stdio.h>
    int main (){
    int n, maior, menor, soma=0, contador;
    float media;
    printf ("Digite o numero 1: ");
    scanf ("%d",&n);
    maior = n;
    menor = n;
    soma = soma + n;
    for (contador=1; contador<5; contador++){
        printf ("Digite o numero %d: ",contador+1);
        scanf ("%d",&n);
        if (n>maior){
            maior = n;
        }
        if (menor > n){
            menor = n;
        }
        soma = soma + n;

    }
    printf ("A soma: %d\n",soma);
    media = (float)soma / 5;
    printf ("A media: %.2f\n",media);
    printf ("O menor: %d\n",menor);
    printf ("O maior: %d\n",maior);


return 0;
}

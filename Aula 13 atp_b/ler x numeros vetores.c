#include <stdio.h>
    int main (){

    int quant,i=0, z=0;
    printf ("Quantos numeros serao lidos: ");
    scanf ("%d",&quant);
    int n[quant];
    do {
    printf ("Informe um numero: ");
    scanf ("%d",&n[i]);


    i++;

    }
    while (i<quant);

    do {
    printf ("Os numeros: %d\n",n[z]);

    z++;

    }
    while (z<quant);
return 0;
}

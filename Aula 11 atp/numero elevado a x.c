#include <stdio.h>
#include <math.h>
int main (){

    float numero, expoente;
    double pow (double numero, double expoente);
    printf ("Informe um numero: ");
    scanf ("%f",&numero);
    printf ("Informe seu expoente: ");
    scanf ("%f",&expoente);

    printf ("O resultado: %lf\n",pow (numero,expoente));



return 0;
}

#include <stdio.h> //////// volume do cilindro
    int main (){

    float v, h, r, pi;
    printf ("Digite o valor da altura: ");
    scanf ("%f",&h);

    printf ("Digite o valor do raio: ");
    scanf ("%f",&r);

    pi = 3.141592;

    v = pi * (r*r) * h;

    printf ("O volume do cilindro: %f",v);
    return 0;




    }

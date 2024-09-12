#include <math.h>
#include <stdio.h>
#define PI 3.14159265

int main (){
    float graus, radianos;
    printf ("Infome o valor do angulo em graus: ");
    scanf ("%f",&graus);
    radianos = graus * PI / 180;
    double sin(double radianos);
    double cos (double radianos);
    printf ("Seno: %lf\n",sin(radianos));
    printf ("Cosseno: %.3lf\n",cos(radianos));



return 0;
}

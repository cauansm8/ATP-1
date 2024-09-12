#include <stdio.h>
#include <math.h>
float media (float n1, float n2){
    float  resultado = (n1+n2)/2;
    return resultado;
}

int main (){
    float n1,n2;
printf ("Informe a nota 1: ");
scanf ("%f",&n1);
printf ("Informe a nota 2: ");
scanf ("%f",&n2);
float m;
m = media (n1,n2);
printf ("A media: %.2f", m);



return 0;
}

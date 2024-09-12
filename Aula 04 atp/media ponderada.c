////// media ponderada
#include <stdio.h>
    int main () {
    float n1, n2, p1, p2, m;
    printf ("Lembre-se de digitar os valores sem nenhuma casa decimal");
    printf ("\n");
    printf ("Digite o valor da nota 1: ");
    scanf ("%f",&n1);
    printf ("Digite o valor do peso 1: ");
    scanf ("%f",&p1);
    printf ("Digite o valor da nota 2: ");
    scanf ("%f",&n2);
    printf ("Digite o valor do peso 2: ");
    scanf ("%f",&p2);
    m = ((n1*p1)+(n2*p2))/(p1+p2);
    printf ("A sua media: %.2f",m);
    return 0;

    }

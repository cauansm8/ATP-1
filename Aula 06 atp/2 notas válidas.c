#include <stdio.h> ///// notas válidas ou não
    int main (){
    float a,b;
    printf ("Digite a primeira nota: ");
    scanf ("%f",&a);
    printf ("Digite a segunda nota: ");
    scanf ("%f",&b);

    if (a<0 || a>10) {
        printf ("Primeira nota invalida.");
    }
    else {
        printf ("Primeira nota valida");
    }
    printf ("\n");
    printf ("\n");

    if (b<0 || b>10) {
        printf ("Segunda nota invalida");
    }
    else {
        printf ("Segunda nota valida");
    }





    return 0;
    }

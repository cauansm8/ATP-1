#include <stdio.h> ///// segundos para horas, minutos e segundos
    int main (){
    int s,m,h;
    printf ("Digite a quantidade de segundos: ");
    scanf ("%d",&s);
    m = s / 60;
    h = m / 60;
    printf ("A quantidade de segundos: %d",s);
    printf ("\n");
    printf ("A quantidade de minutos: %d",m);
    printf ("\n");
    printf ("A quantidade de horas: %d",h);
    return 0;
    }

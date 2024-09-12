#include <stdio.h> //// quantidade de cupons
    int main (){
    int gasto, cupons;
    printf ("Digite o valor gasto no mercado: ");
    scanf ("%d",&gasto);
    cupons = gasto/20 ;
    printf ("A quantidade de cupons: %d",cupons);
    return 0;
    }

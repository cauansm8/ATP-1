///// dividir o prêmio
#include <stdio.h>
    int main (){
    float a,b,c,premio;
    printf ("Digite o valor do premio: ");
    scanf ("%f",&premio);
    a = premio * 50/100;
    printf ("\n");
    printf ("O primeiro ganhara: %.2f",a);
    b = premio * 30/100;
    printf ("\n");
    printf ("O segunda ganhara: %.2f",b);
    c = premio - (a + b);
    printf ("\n");
    printf ("O terceiro ganhara: %.2f",c);
    return 0;

    }

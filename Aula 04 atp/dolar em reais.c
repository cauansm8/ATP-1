////// dolar para real (1 dolar vale 5 reais)
#include <stdio.h>
int main(){
    float real, dolar;
    printf ("Digite quantos reais voce tem: ");
    scanf ("%f",&real);
    dolar = real*5;
    printf ("Voce tem: %.1f",dolar);
    return 0;

}

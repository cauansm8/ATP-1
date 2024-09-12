///// desconto de 12%
#include <stdio.h>
int main (){
    float x, desconto, valor;
    printf("Digite o valor do produto: ");
    scanf ("%f",&x);
    printf ("Qual a porcentagem do desconto: ");
    scanf ("%f",&desconto);
    valor = x - (12*x)/100;
    printf ("O valor com desconto: %.2f",valor);
    return 0;
}

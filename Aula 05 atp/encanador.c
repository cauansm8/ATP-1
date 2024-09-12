#include <stdio.h> //////// encanador
    int main (){
    float dias, imposto, bruto, liquido;
    printf ("Quantos dias o encanador trabalha: ");
    scanf ("%f", &dias);

    bruto = dias * 30;
    printf ("O salario bruto: %.2f",bruto);

    printf ("\n");

    imposto = (bruto*8)/100;
    printf ("O desconto: %.2f",imposto);

    printf ("\n");

    liquido = bruto - imposto;
    printf ("O salario liquido: %.2f",liquido);

    return 0;

    }

#include <stdio.h> ///// loteria e investimento
    int main (){
    float a, b, c, investido, premio,p_a,p_b,p_c,r_a,r_b,r_c;
    printf ("Digite o valor do premio: ");
    scanf ("%f",&premio);
    printf ("Quanto o primeiro amigo investiu: ");
    scanf ("%f",&a);
    printf ("Quanto o segundo amigo investiu: ");
    scanf ("%f",&b);
    printf ("Quanto o terceiro amigo investiu: ");
    scanf ("%f",&c);
    investido = a + b + c;
    p_a = a*100/investido;
    p_b = b*100/investido;
    p_c = c*100/investido;
    r_a = (p_a/100)*premio;
    r_b = (p_b/100)*premio;
    r_c = (p_c/100)*premio;
    printf ("O retorno do primeiro: %.2f",r_a);
    printf ("\n");
    printf ("O retorno do segundo: %.2f",r_b);
    printf ("\n");
    printf ("O retorno do terceiro: %.2f",r_c);

    return 0;
    }

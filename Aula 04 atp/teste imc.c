//// imc
#include <stdio.h>
 int main () {
     float peso, altura, imc;
     printf ("Digite o seu peso: ");
     scanf ("%f",&peso);
     printf ("Digite a sua altura: ");
     scanf ("%f",&altura);
     imc = peso/(altura*altura);
     if (imc >= 25){
            printf ("\n Gordo mamao");
     }

     else (imc < 25);{
            printf ("\n Ta passando fome?");
     }
     printf ("\n");
     printf("O seu imc: %.2f",imc);
     return 0;

}

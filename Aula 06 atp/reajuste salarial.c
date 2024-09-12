#include <stdio.h> /////////// reajuste salarial
    int main (){

    float salario, n_salario;
    printf ("Digite o seu salario: ");
    scanf ("%f",&salario);

    if (salario <= 1000) {
        n_salario = salario + (salario*20/100);
        printf ("Novo salario: %.2f",n_salario);
    }
    else {

        if (salario <=2000){
            n_salario = salario + (salario*10/100);
            printf ("Novo salario: %.2f",n_salario);
        }



        else {
        printf ("Sem reajuste");
        }


    }














    return 0;
}

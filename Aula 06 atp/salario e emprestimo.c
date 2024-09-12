#include <stdio.h> ///////// empréstimo
    int main (){
    float salario, emp;
    printf ("Digite o valor do salario: ");
    scanf ("%f",&salario);
    printf ("Digite o valor da prestacao: ");
    scanf ("%f",&emp);
    if (emp >= salario*20/100) {
        printf ("Emprestimo negado");
    }
    else {
        printf ("Emprestimo concedido");
    }





return 0;
}

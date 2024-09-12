/////// aumento do salário
#include <stdio.h>
    int main (){
    float salario_ant, aumento, salario_novo;
    printf ("Digite o valor do salario antigo: ");
    scanf ("%f",&salario_ant);
    printf ("\n");
    printf("Digite o valor do aumento em porcentagem: ");
    scanf ("%f",&aumento);
    salario_novo = salario_ant + (salario_ant*aumento/100);
    printf ("\n");
    printf ("O seu novo salario: %.2f",salario_novo);
    return 0;



    }

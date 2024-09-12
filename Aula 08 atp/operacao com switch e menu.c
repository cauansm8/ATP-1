#include <stdio.h>
    int main (){
    int opcao;
    float n_1, n_2, resultado;

    printf ("1- Somar os dois numeros \n 2- Subtrair os dois numeros \n 3- Multiplicar os dois numeros \n 4- Dividir os dois numeros (o denominador nao pode ser zero) \n 5- Sair \n ");
    scanf ("%d",&opcao);

    switch (opcao){
    case 1:
    printf ("Digite o primeiro numero: ");
    scanf ("%f",&n_1);
    printf ("Digite o segundo numero: ");
    scanf ("%f",&n_2);
    resultado = n_1 + n_2;
    printf ("Resultado da soma: %.2f",resultado);
    break;


    case 2:
    printf ("Digite o primeiro numero: ");
    scanf ("%f",&n_1);
    printf ("Digite o segundo numero: ");
    scanf ("%f",&n_2);
    resultado = n_1 - n_2;
    printf ("Resultado da subtracao: %.2f",resultado);
    break;


    case 3:
    printf ("Digite o primeiro numero: ");
    scanf ("%f",&n_1);
    printf ("Digite o segundo numero: ");
    scanf ("%f",&n_2);
    resultado = n_1 * n_2;
    printf ("Resultado da multiplicacao: %.2f",resultado);
    break;


    case 4:
    printf ("Digite o primeiro numero: ");
    scanf ("%f",&n_1);
    printf ("Digite o segundo numero: ");
    scanf ("%f",&n_2);
    if (n_2 == 0){
        printf ("Nao pode denominador igual a 0 \n\n");
    }
    else {
    resultado = n_1 / n_2;
    printf ("Resultado da divisao: %.2f",resultado);
    break; }


    case 5:
    printf ("Fim do programa");
    break;


    default:
    printf ("Opcao errada");
    break;


    }
return 0;
}

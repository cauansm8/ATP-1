#include <stdio.h>
    int main (){
    float n_1, n_2, resultado;
    char simbolo;
    printf ("Digite o primeiro numero: ");
    scanf ("%f",&n_1);
    printf ("Digite o segundo numero: ");
    scanf ("%f",&n_2);
    fflush (stdin);
    printf ("Insira o sinal da operacao (+, -, . ou /): ");
    scanf ("%c",&simbolo);

    switch (simbolo) {

    case '+':
    resultado = n_1 + n_2;
    printf ("O resultado da soma: %.2f",resultado);
    break;

    case '-':
    resultado = n_1 - n_2;
    printf ("O resultado da subtracao: %.2f",resultado);
    break;

    case '.':
    resultado = n_1 * n_2;
    printf ("O resultado da multiplicacao: %.2f",resultado);
    break;

    case '/':
    resultado = n_1 / n_2;
    printf ("O resultado da divisao: %.2f",resultado);
    break;

    default:
    printf ("Simbolo incorreto foi inserido");
    break;


    }
return 0;
}

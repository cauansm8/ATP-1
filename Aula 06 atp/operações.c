#include <stdio.h> /////////// operação com dois números
    int main (){
    float a,b,r;
    char simbolo; ////////// "simbolo" é o nome da variável de caracter
    printf ("Digite o primeiro numero: ");
    scanf ("%f",&a);
    printf ("Digite o segundo numero: ");
    scanf ("%f",&b);
    printf ("\n");
    fflush (stdin); ///// serve para por fim a arquivação de n° e início da arquivação do caracter
    printf ("Digite o simbolo da operacao entre +, - , / ou *: ");
    scanf ("%c",&simbolo); ///////// arquiva o caracter na variável simbolo

    if (simbolo == '+' || simbolo == '*') {

        if (simbolo == '+') {
            r = a + b;
            printf ("A soma: %.2f",r);
        }
        else {
            r = a * b;
            printf ("A multiplicacao: %.2f",r);
        }
    }


    else {
        if (simbolo == '-') {
            r = a - b;
            printf ("A subtracao: %.2f",r);

        }
        else {
            r = a/b;
            printf ("A divisao: %.2f",r);
        }


    }


return 0;
}

#include <stdio.h> /////////// opera��o com dois n�meros
    int main (){
    float a,b,r;
    char simbolo; ////////// "simbolo" � o nome da vari�vel de caracter
    printf ("Digite o primeiro numero: ");
    scanf ("%f",&a);
    printf ("Digite o segundo numero: ");
    scanf ("%f",&b);
    printf ("\n");
    fflush (stdin); ///// serve para por fim a arquiva��o de n� e in�cio da arquiva��o do caracter
    printf ("Digite o simbolo da operacao entre +, - , / ou *: ");
    scanf ("%c",&simbolo); ///////// arquiva o caracter na vari�vel simbolo

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

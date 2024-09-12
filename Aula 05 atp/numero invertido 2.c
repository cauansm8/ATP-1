#include <stdio.h> //// OUTRA MANEIRA DE INVERTER O NUMERO
    int main (){
    int n,a,b,c,r;
    printf ("Digite o numero: ");

    if (n>999 || n<100) {
        printf ("Numero incompativel");
    }
        else {
    scanf ("%d",&n);
    a = n/100;
    b = (n%100)/10;
    c =( (n%100)%10);
    printf ("O numero invertido: %d%d%d",c,b,a);
    return 0;
    }
    }
///////////////////// A PORCENTAGEM PEGA O RESTO DA DIVISAO - EX: 123 % 100 = 123-100 = 23
///////////////////// O 23 VAI SER USADO DEPOIS

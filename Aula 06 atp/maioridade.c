#include <stdio.h> /////////// verificação de maioridade
    int main (){
    int a;
    printf ("Digite a sua idade: ");
    scanf ("%d",&a);
    if (a >= 18) {
        printf ("Maior de idade");
    }
    else {
        printf ("Menor de idade");
    }
    return 0;
    }

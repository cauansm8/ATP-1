#include <stdio.h> ////////////////// TG ou não
    int main (){
    int idade;

    printf ("Digite a sua idade: ");
    scanf ("%d",&idade);

    if (idade != 18) { ////////////////////////// idade diferente de 18
        printf ("Nao pega TG");
    }
    else {
        printf ("Pega TG"); //////////////////////// idade igual 18
    }
    return 0;

    }

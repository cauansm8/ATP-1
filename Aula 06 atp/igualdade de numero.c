#include <stdio.h> ////////////// comparação de números
    int main (){
    int a;
    printf ("Digite um numero igual ou diferente de 30: ");
    scanf ("%d",&a);
    if (a != 30) { ////////////////////// 'a' é diferente de 30?
        printf ("Numero diferente");
    }
    else {
        printf ("Numero igual");
    }
    system ("Pause");
    return 0;
    }

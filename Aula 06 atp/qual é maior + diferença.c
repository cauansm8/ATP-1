#include <stdio.h> //////// qual é o maior + diferença entre eles
    int main () {
    int a,b,c;
    printf ("Digite o primeiro numero: ");
    scanf ("%d",&a);
    printf ("Digite o segundo numero: ");
    scanf ("%d",&b);
    if (a>b) {
        printf ("Primeiro maior que o segundo");
        printf ("\n");

        c = a - b;
        printf ("A diferenca: %d",c);

    }
    else {
        printf ("Segundo maior que o primeiro");
        printf ("\n");
        c = b - a;
        printf ("A diferenca: %d",c);

    }

    return 0;

    }

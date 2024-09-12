#include <stdio.h>

    int main (){
    int n, x=1;
    float h=0.0;
    printf ("Digite um numero: ");
    scanf ("%d",&n);

    if (n<0){ printf ("Informe um numero positivo");}
    else {
    do {
    h +=  1.0/x; //////////// SE É FLOAT, COLOCAR O VALOR COM CASAS DECIMAIS (1.0)

    x++;

    }
    while (x <= n);

    printf ("A soma harmonica: %f",h);
    }

return 0;
}

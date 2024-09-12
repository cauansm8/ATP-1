#include <stdio.h>
    int main (){
    int a, b, c;

    printf ("Informe o lado A: ");
    scanf ("%d",&a);
    printf ("Informe o lado B: ");
    scanf ("%d",&b);
    printf ("Informe o lado C: ");
    scanf ("%d",&c);


if ((a < b + c) && (b < a + c) && (c < a + b) ){
    printf ("Pode formar um triangulo");
}
else {
    printf ("Nao pode formar um triangulo");
}


return 0;
}

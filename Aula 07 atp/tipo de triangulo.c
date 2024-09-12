#include <stdio.h> //////// compare lados do triângulo
    int main (){
    int L1,L2,L3;
    printf ("Digite o lado 1: ");
    scanf ("%d",&L1);
    printf ("Digite o lado 2: ");
    scanf ("%d",&L2);
    printf ("Digite o lado 3: ");
    scanf ("%d",&L3);

    if (L1 == L2 && L2 == L3){
        printf ("Triangulo equilatero");
    }
    else {
        if ((L1 == L2 && L2 != L3 ) || (L1 != L2 && L2 == L3) || (L1 = L3 && L1 != L2)){
        printf ("Triangulo isosceles");
        }
        else {
        printf ("Triangulo escaleno");
        }
        }








return 0;
}

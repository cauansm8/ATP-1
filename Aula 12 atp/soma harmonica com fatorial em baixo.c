#include <stdio.h>

    int main (){
    int n, x=1,z,fat=1;
    float h=0.0;
    printf ("Digite um numero: ");
    scanf ("%d",&n);

    if (n<0){ printf ("Informe um numero positivo");}
    else {
    do {
    fat = fat * x;
    h = h + 1.0/fat;
    x++;
    }
    while (x <= n);

    printf ("A soma harmonica: %f",(float)h+1);
    }

return 0;
}

#include <stdio.h>
#include <math.h>
    int main (){

    int n, i=0, x_2, x_3, raiz;
    double sqrt (n);

    do {
    printf ("Digite o numero %d: ",i+1);
    scanf ("%d",&n);

    x_2 = n*n;
    x_3 = n*n*n;

    printf ("Numero elevado ao quadrado: %d\n",x_2);
    printf ("Numero elevado ao cubo: %d\n",x_3);
    printf ("A raiz do numero: %.2lf\n",sqrt(n));
    i++;
    }
    while (n!=0);







return 0;
}

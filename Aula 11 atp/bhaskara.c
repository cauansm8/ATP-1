#include <stdio.h>
#include <math.h>
int main (){
    double a,b,c, delta,x1,x2,raiz;
    double sqrt (delta);
    printf ("Informe ax^2: ");
    scanf ("%lf",&a);
    printf ("Informe bx: ");
    scanf ("%lf",&b);
    printf ("Informe c: ");
    scanf ("%lf",&c);

    if (a==0){
        printf ("Equacao do 1. grau\n");
    }
    else {
    delta = (b*b) - 4 * (a) * (c);
    printf ("Delta: %lf\n",delta);
        if (delta<0){
        printf ("Nao ha raiz\n");
        }
        if (delta > 0){

        x1 = (b*(-1)) + sqrt (delta) / (2*a);
        x2 = (b*(-1)) - sqrt (delta) / (2*a);
        printf ("As duas raizes: %lf e %lf\n",x1,x2);
        }
        if (delta==0){
        x1 = (b*(-1)) / (2*a);
            printf ("A raiz unica: %lf\n",x1);
            }

return 0;
}
}


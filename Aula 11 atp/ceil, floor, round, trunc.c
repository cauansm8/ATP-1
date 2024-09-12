#include <stdio.h>
#include <math.h>
    int main (){
    double a;
    double ceil(double a);
    double floor(double a);
    double trunc(double a);
    double round(double a);
    printf ("Digite um numero aleatorio: ");
    scanf ("%lf",&a);
    printf ("Ceil:  %lf\n",ceil(a));
    printf ("Floor: %lf\n",floor(a));
    printf ("Round: %lf\n",round(a));
    printf ("Trunc: %lf\n",trunc(a));


return 0;
}

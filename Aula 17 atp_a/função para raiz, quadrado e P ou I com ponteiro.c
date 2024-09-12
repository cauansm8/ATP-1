#include <stdio.h>
#include <math.h>


void calcular(int n, double *raiz, double *quadrado, int *par){
    *raiz =sqrt (n);
    printf ("A raiz do numero: %lf\n",*raiz);
    *quadrado = n * n;
    printf ("O quadrado do numero: %lf\n",*quadrado);
    *par = n % 2;
    if (*par==0){
        printf ("Numero par\n");
    }
    else {
        printf ("Numero impar\n");
    }
}
int main (){

int num,par;
double raiz, quadrado;
printf ("Informe um numero: ");
scanf ("%d",&num);
calcular (num,&raiz,&quadrado,&par);

return 0;
}

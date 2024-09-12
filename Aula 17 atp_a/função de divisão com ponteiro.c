#include <stdio.h>
void quociente_resto(int n, int d, int *q, int *r){
    *q = n / d;
    printf ("O quociente: %d\n",*q);
    *r =  n %  d;
    printf ("O resto: %d\n", *r);


}




int main (){

int N,D,qc,rs;

printf ("Informe o numerador: ");
scanf ("%d",&N);
printf ("Informe o divisor: ");
scanf ("%d",&D);

quociente_resto (N,D,&qc,&rs);



return 0;
}

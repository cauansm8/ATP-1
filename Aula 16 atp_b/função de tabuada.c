#include <stdio.h>
void tabuada (int n1){
   int i=0;
   do{
    int tabuada = n1 * i;

    printf ("%d\n",tabuada);
    i++;
   }
   while (i<=10);
}



int main (){

int n;
printf ("Informe um numero: ");
scanf ("%d",&n);
tabuada (n);



return 0;
}

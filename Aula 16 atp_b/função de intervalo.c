#include <stdio.h>
void dentro_intervalo (int valor, int inicio, int fim){
    if (valor>=inicio && valor <= fim){
       int dentro_intervalo = 1;
       printf ("\nResultado: %d\n",dentro_intervalo);

    }
    else {
      int  dentro_intervalo = 0;
      printf ("\nResultado: %d\n",dentro_intervalo);

    }

}





int main (){
int n, i, f;
printf ("Informe o numero: ");
scanf ("%d",&n);
printf ("Informe o inicio do intervalo: ");
scanf ("%d",&i);
printf ("Informe o fim do intervalo: ");
scanf ("%d",&f);

dentro_intervalo (n,i,f);



return 0;
}

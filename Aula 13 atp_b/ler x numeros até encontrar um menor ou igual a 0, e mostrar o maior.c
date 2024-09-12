#include <stdio.h>
    int main (){

   int n, i=0, maior=0,z;

   do{
        int v[i];
        printf ("Informe o numero%d: ",i+1);
        scanf ("%d",&n);
        v[i] = n;
        if (n>maior){
            maior = n;
            z = i;
        }




    i++;
   }
    while (n>0);

        printf ("O vetor %d tem o maior numero: %d",z,maior);




return 0;
}

#include <stdio.h>
    int main (){


    int n,i=0,i_2=1,num;
    printf ("Informe a quantidade de numeros: ");
    scanf ("%d",&n);
    int v[n];

    do{
    printf ("Informe um numero: ");
    scanf("%d",&num);
    v[i]=num;







    i++;
    }
    while (i<n);
    printf ("A ordem inversa: ");
    do {
    printf ("%d ",v[n-i_2]);



    i_2++;
    }
    while (i_2<=n);


return 0;
}

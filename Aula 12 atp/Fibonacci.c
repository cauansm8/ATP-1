#include <stdio.h>
int main (){
    int q,x=2,i=2;


    printf ("Informe quantos termos farao parte da sequencia de fibonacci: ");
    scanf ("%d",&q);
    int n[q];
    printf ("O 1 termo: 1\n");
    printf ("O 2 termo: 1\n");
    n[0]=1;
    n[1]=1;

    do{
    n[x] = n[x-1]+n[x-2];

    printf ("O %d termo: %d\n",i+1,n[x]);



    i++;



    x++;
    }
    while (x<=q);



return 0;
}

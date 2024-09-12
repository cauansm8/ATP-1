#include <stdio.h>
    int main (){

    int i=0,n, v[9],i_2=0,l[9];

    /////////////////////
    printf ("Informe um numero: ");
    scanf ("%d",&n);
    v[0] = n;
    ///////////////////
    printf ("Informe um numero: ");
    scanf ("%d",&n);

    if (n==v[0]){
        printf ("Informe outro numero: ");
        scanf ("%d",&n);
        v[1] = n;
    }
    else {
        v[1] = n;
    }

    //////////////////////////////
    printf ("Informe um numero: ");
    scanf ("%d",&n);

    if (n==v[0] || n==v[1]){
        printf ("Informe outro numero: ");
        scanf ("%d",&n);
        v[2] = n;
    }
    else {
        v[2] = n;
    }
    //////////////////////////////
    printf ("Informe um numero: ");
    scanf ("%d",&n);
    if (n==v[0] || n== v[1] || n==v[2]){
        printf ("Informe outro numero: ");
        scanf ("%d",&n);
        v[3] = n;
    }
    else {
        v[3] = n;
    }
    /////////////////////////////////
    printf ("Informe um numero: ");
    scanf ("%d",&n);
    if (n==v[0] || n== v[1] || n==v[2] || n==v[3]){
        printf ("Informe outro numero: ");
        scanf ("%d",&n);
        v[4] = n;
    }
    else {
        v[4] = n;
    }
    //////////////////////////////////
    printf ("Informe um numero: ");
    scanf ("%d",&n);
    if (n==v[0] || n== v[1] || n==v[2] || n==v[3] || n==v[4]){
        printf ("Informe outro numero: ");
        scanf ("%d",&n);
        v[5] = n;
    }
    else {
        v[5] = n;
    }
    /////////////////////////////////
    printf ("Informe um numero: ");
    scanf ("%d",&n);
    if (n==v[0] || n== v[1] || n==v[2] || n==v[3] || n==v[4] || n==v[5]){
        printf ("Informe outro numero: ");
        scanf ("%d",&n);
        v[6] = n;
    }
    else {
        v[6] = n;
    }
    //////////////////////////////////////
    printf ("Informe um numero: ");
    scanf ("%d",&n);
    if (n==v[0] || n== v[1] || n==v[2] || n==v[3] || n==v[4] || n==v[5] || n==v[6]){
        printf ("Informe outro numero: ");
        scanf ("%d",&n);
        v[7] = n;
    }
    else {
        v[7] = n;
    }
    //////////////////////////////////
    printf ("Informe um numero: ");
    scanf ("%d",&n);
    if (n==v[0] || n== v[1] || n==v[2] || n==v[3] || n==v[4] || n==v[5] || n==v[6] || n==v[7]){
        printf ("Informe outro numero: ");
        scanf ("%d",&n);
        v[8] = n;
    }
    else {
        v[8] = n;
    }
    ////////////////////////////////////////////////
    printf ("Informe um numero: ");
    scanf ("%d",&n);
    if (n==v[0] || n== v[1] || n==v[2] || n==v[3] || n==v[4] || n==v[5] || n==v[6] || n==v[7] || n==v[8]){
        printf ("Informe outro numero: ");
        scanf ("%d",&n);
        v[9] = n;
    }
    else {
        v[9] = n;
    }





    do{
        printf ("%d ",v[i_2]);

    i_2++;
    }
    while (i_2<10);

    printf ("\nVetor final: %d",v[9]);





return 0;
}

#include <stdio.h>
    int main (){

    int n,i=0,x=1,i_t=0,r_p=0; //////////// i =  repeti��o para linha //// n = quantidade de linhas //////

    printf ("Informe quantas linha farao parte do triangulo de Floyd: "); //////// r_p = quantidade de termos na linha (repeti��o) //// i_t = quant max para termos
    scanf ("%d",&n);
    n = n - 1;
    printf ("1 \n");



    do{ /////////repeti��o para linha

    i_t = i_t + 1;
    r_p = 0;
        do {

        x = x + 1;
        /////////// repeti��o para soma




        if (r_p<i_t){
        printf ("%d ",x);


        }
        else if (r_p=i_t) {

            printf ("%d \n",x);}
        r_p = r_p + 1;

        }


        while (i_t>=r_p);


    i++;
    }
    while (i<n);



return 0;
}

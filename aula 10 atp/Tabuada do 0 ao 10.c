#include <stdio.h>
    int main (){
    int contador,x,r;

    for (x = 0; x <= 10; x++){

        for (contador = 0; contador <= 10; contador++){
            r = x * contador;
            printf ("%d x %d: %d\n",x,contador,r);



        }

        printf ("\n\n");



    }
return 0;
}

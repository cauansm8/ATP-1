#include <stdio.h> ///// classifica��o do pre�o do produto

    int main (){

    float preco;

    printf ("Digite o valor do produto: ");
    scanf ("%f",&preco);

    if (preco<100){
        printf ("BARATO");
    }

    else {
            if (preco<=500){;
            printf ("NORMAL");
                            }
            else {
                printf ("CARO");
                }

    }




    return 0;
    }

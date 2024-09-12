#include <stdio.h>
    int main (){
    int n;
    printf ("Digite um numero: ");
    scanf ("%d",&n);
    if (n<0){
        printf ("Reinicie o programa e digite um numero positivo");
    }
    else {
    do {

    if (n%3==0){
        printf ("Numero multiplo de 3: %d\n",n);

    }
    if (n%5==0){
        printf ("Numero multiplo de 5: %d\n",n);
    }
    n--;



    }
    while (n>=3);
    }

return 0;
}

#include <stdio.h>
    int main (){
    int n_1,n_2,c,r, i=0;

    do {
    printf ("ESCOLHA A OPERACAO: 1- Adicao | 2- Subtracao | 3- Multiplicacao | 4- Divisao | 5- Sair \n");
    scanf ("%d",&c);
    if (c==5){
        printf ("Fim do programa");
    }
    else {
    printf ("Digite o primeiro numero: ");
    scanf ("%d",&n_1);
    printf ("Digite o segundo numero: ");
    scanf ("%d",&n_2);
    if (c==1){
    r = n_1 + n_2;
    printf ("O resultado da operacao%d: %d\n",i+1,r);
    }
    if (c==2){
    r = n_1 - n_2;
    printf ("O resultado da operacao%d: %d\n",i+1,r);
    }
    if (c==3) {
    r = n_1 * n_2;
    printf ("O resultado da operacao%d: %d\n",i+1,r);
    }
    if (c==4){
    r = n_1/n_2;
    printf ("O resultado da operacao%d: %d\n",i+1,r);
    }


    }
    }
    while (c!=5);

return 0;
    }




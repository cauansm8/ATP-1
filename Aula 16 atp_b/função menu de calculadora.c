#include <stdio.h>

float menu (float escolha, float num1, float num2){

    do{


    if (escolha==1.0){
        float menu = num1+num2;
        printf ("%.2f",menu);
        return menu;

    }
    if (escolha==2.0){
        float menu = num1 - num2;
        printf ("%.2f",menu);
        return menu;

    }
    if (escolha==3.0){
        float  menu = num1*num2;
        printf ("%.2f",menu);
        return menu;

    }
    if (escolha==4.0){
        float  menu = num1 / num2;
        printf ("%.2f",menu);
        return menu;

    }
    if (escolha<=1.0 || escolha>=5.0){
        printf ("\nFim do programa \n");

    }

    }
    while (escolha!=5.0);

}

int main (){
   ;
   float e,n1,n2;

    printf ("1- SOMA || 2- SUBTRACAO || 3- MULTIPLICACAO || 4- DIVISAO || 5- SAIR\nDigite opcao: ");
    scanf ("%f",&e);

    printf ("Informe o numero 1: ");
    scanf ("%f",&n1);

    printf ("Informe o numero 2: ");
    scanf ("%f",&n2);
    menu (e,n1,n2);









return 0;
}

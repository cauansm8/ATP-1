#include <stdio.h>
    int main (){
    int cod;
    printf ("Digite o numero do codigo: ");
    scanf ("%d",&cod);

    switch (cod){

    case 1:
    printf ("Alimento nao-perecivel");
    break;

    case 2 ... 4:
    printf ("Alimento perecivel");
    break;


    case 5 ... 6:
    printf ("Vestuario");
    break;

    case 7:
    printf ("Higiene pessoal");
    break;

    case 8 ... 15:
    printf ("Limpeza e utensilhos domesticos");
    break;

    default:
    printf ("Invalido");
    break;



    }
return 0;
}

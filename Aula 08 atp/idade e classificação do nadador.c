#include <stdio.h>
    int main (){
    int idade;
    printf ("Digite a idade da nadador: ");
    scanf ("%d",&idade);

    switch (idade){

    case 0 ... 4:
    printf ("Nao pode competir");
    break;

    case 5 ... 7:
    printf ("Infantil A");
    break;

    case 8 ... 10:
    printf ("Infantil B");
    break;

    case 11 ... 13:
    printf ("Juvenil A");
    break;

    case 14 ... 17:
    printf ("Juvenil B");
    break;

    default:
    printf ("Maior de idade");
    break;


}
return 0;
}

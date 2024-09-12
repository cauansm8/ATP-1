#include <stdio.h>
    int main (){
    int mes, dia;


    printf ("Indique o numero do mes: ");
    scanf ("%d",&mes);

    printf ("Indique o numero do dia: ");
    scanf ("%d",&dia);

if (mes >= 1 && mes <= 12) {


    //// JANEIRO ////
    if (mes == 1  && dia >= 1 && dia <= 31) {
        printf ("Data valida de Janeiro");
    }
    else if (mes ==1 && dia >31) { printf ("Data invalida"); }
    //// FEVEREIRO ////
    if (mes == 2 ) {
        if (dia >= 1 && dia <= 28){
            printf ("Data valida de Fevereiro");
        }

         if ( dia == 29) {printf ("Data valida de Fevereiro em ano bissexto");} }
        else if (dia > 29) { printf ("Data invalida"); }

    //// MARÇO ////                }
    if (mes == 3  && dia >= 1 && dia <= 31) {
        printf ("Data valida de Marco");
    }
    else if (mes ==3 && dia >31) { printf ("Data invalida");}

    //// ABRIL ////
    if (mes == 4  && dia >= 1 && dia <= 30) {
        printf ("Data valida de Abril");
}
    else if (mes ==4 && dia >30) { printf ("Data invalida");}
    //// MAIO ////
    if (mes == 5  && dia >= 1 && dia <= 31) {
        printf ("Data valida de Maio"); }
    else if (mes ==5 && dia >31) { printf ("Data invalida");}
    //// JUNHO ////
    if (mes == 6  && dia >= 1 && dia <= 30) {
        printf ("Data valida de Junho"); }
    else if (mes ==6 && dia >30) { printf ("Data invalida");}

    //// JULHO ////
    if (mes == 7  && dia >= 1 && dia <= 31) {
        printf ("Data valida de Julho"); }
    else if  (mes ==7 && dia >31) { printf ("Data invalida");}

    //// AGOSTO ////
    if (mes == 8  && dia >= 1 && dia <= 31) {
        printf ("Data valida de Agosto"); }
    else if (mes ==8 && dia >31) { printf ("Data invalida");}

    //// SETEMBRO ////
    if (mes == 9  && dia >= 1 && dia <= 30) {
        printf ("Data valida de Setembro"); }
    else if (mes ==9 && dia >30) { printf ("Data invalida");}

    //// OUTUBRO ////
    if (mes == 10  && dia >= 1 && dia <= 31) {
        printf ("Data valida de Outubro"); }
    else if (mes ==10 && dia >31) { printf ("Data invalida");}

    //// NOVEMBRO ////
    if (mes == 11  && dia >= 1 && dia <= 30) {
        printf ("Data valida de Novembro"); }
    else if (mes ==11 && dia >30) { printf ("Data invalida");}

    //// DEZEMBRO ////
    if (mes == 12  && dia >= 1 && dia <= 31) {
        printf ("Data valida de Dezembro"); }
    else if (mes ==12 && dia >31) { printf ("Data invalida");}
}
else { printf ("Mes invalido");}


return 0; ////////////////// else if serve para colocar condição no else
          ////////////////// sem o 'else if', ele entende como "resto"
    }

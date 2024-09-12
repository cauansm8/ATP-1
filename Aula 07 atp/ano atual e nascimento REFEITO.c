#include <stdio.h> /////////// PRESTAR ATENÇÃO NAS DATAS SOBRE MAIOR OU MENOR
    int main (){
    int dia_n, mes_n, ano_n, ano_atual, mes_atual, dia_atual, idade;
    printf ("Informe o dia do nascimento: ");
    scanf ("%d",&dia_n);
    printf ("Informe o mes do nascimento: ");
    scanf ("%d",&mes_n);
    printf ("Informe o ano do nascimento: ");
    scanf ("%d",&ano_n);
    printf ("Informe o ano atual: ");
    scanf ("%d",&ano_atual);
    printf ("Informe o mes atual: ");
    scanf ("%d",&mes_atual);
    printf ("Informe o dia atual: ");
    scanf ("%d",&dia_atual);


if (ano_n == ano_atual){ printf ("Nao tem idade em anos");}

if (ano_n != ano_atual){


    if (mes_n == mes_atual && dia_atual < dia_n) {
        idade = ano_atual - ano_n - 1;
        printf ("A idade: %d",idade);
    }
    if (mes_n == mes_atual &&  dia_atual >= dia_n){
        idade = ano_atual - ano_n;
        printf ("A idade: %d",idade);
    }

if (mes_atual > mes_n) {
    idade = ano_atual - ano_n;
    printf ("A idade: %d",idade);
    }


if (mes_atual < mes_n){
    idade = ano_atual - ano_n - 1;
    printf ("A idade: %d",idade);}




return 0;
}
    }

#include <stdio.h> //////////// mês e seu nome por extenso

    int main (){
    int a;
    printf ("Digite o numero do mes: ");
    scanf ("%d",&a);

    if (a<0 || a>12) {
    printf ("Numero incorreto.");
}
    else {
            if (a==1){
            printf ("Janeiro");
            }

            if (a==2){
            printf ("Fevereiro");
            }

            if (a==3){
            printf ("Marco");
            }

            if (a==4){
            printf ("Abril");
            }

            if (a==5){
            printf ("Maio");
            }

            if (a==6){
            printf ("Junho");
            }
            if (a==7){
            printf ("Julho");
            }
            if (a==8){
            printf ("Agosto");
            }
            if (a==9){
            printf ("Setembro");
            }
            if (a==10){
            printf ("Outubro");
            }

            if (a==11){
            printf ("Novembro");
            }
            if (a==12){
            printf ("Dezembro");
            }
}


return 0;
}

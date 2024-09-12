#include <stdio.h>
    int main (){
    int idade, pessoas, contador=0, q_p_50anos=0,q_p_50kg=0, idade10_20=0;
    float  soma_altura=0, altura, peso, media_altura_10a20;
    printf ("Digite a quantidade de pessoas: ");
    scanf ("%d",&pessoas);
    printf ("\n");

    while (contador < pessoas){
        printf ("Digite sua idade pessoa n%d: ",contador+1);
        scanf ("%d",&idade);

        printf ("Digite sua altura pessoa n%d em cm: ",contador+1);
        scanf ("%f",&altura);

        printf ("Digite seu peso pessoa n%d em kg: ",contador+1);
        scanf ("%f",&peso);
        printf ("\n");



    if (idade>50){
        q_p_50anos++;

    }
    if (peso<50){
        q_p_50kg++;
    }
    if (idade>10 && idade<20){
        soma_altura = soma_altura + altura;
        idade10_20++;}

    contador++;

    }

    if (idade10_20 == 0){
        media_altura_10a20 == 0;
    }
    else {    media_altura_10a20 = soma_altura / idade10_20 ;}


    printf ("\n");
    printf ("A quantidade de pessoas com idade superior a 50 anos: %d",q_p_50anos);
    printf ("\n");

    printf ("A media da altura de pessoas de 10 a 20 anos em cm: %.2f",media_altura_10a20);
    printf ("\n");

    printf ("O percentual de pessoas com menos de 50 kg: %d",q_p_50kg*100/pessoas);
    printf ("\n");


return 0;
}

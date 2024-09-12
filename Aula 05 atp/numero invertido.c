#include <stdio.h> ///// altere a ordem do numero
    int main (){
    int n,ag100,ag010,m1,ag001,m2,m3,nf;

    printf ("Digite o numero de 100 a 999: ");
    scanf ("%d",&n);
    if (n>999 || n<100) {
        printf ("Numero incompativel");
    }
    else {

    ag100 = n/100; ///// guarda o primeiro algarismo

    m1 = n - (ag100*100);
    m2 = m1 /10; //// calculos por fora
    m3 = m2 * 10;//// calculos por fora

    ag010 = m1 / 10; ///// guarda o algarismo do meio

    ag001 = n - (ag100*100) -m3; ////// guarda o ultimo algarismo

    printf ("O valor: %d%d%d",ag001,ag010,ag100);  ///// inverte os algarismos
    return 0;
    ///////// TENTAR FAZER COM % (PEGA O RESTO DA DIVISÃO), POIS FICA MAIS SIMPLES
    ///////// ESTUDAR CONDICIONAIS PARA EVITAR PROBLEMAS
    }
    }


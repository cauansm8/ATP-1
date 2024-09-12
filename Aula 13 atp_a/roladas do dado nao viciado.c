#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int main (){

    int roladas,i=0,L_1=0,L_2=0,L_3=0,L_4=0,L_5=0,L_6=0;
    printf ("Informe quantas vezes o dado vai ser rolado: ");
    scanf ("%d",&roladas);
    int v[roladas];
    srand (time(NULL));
    do {
    v[i] = rand()%6;

    switch (v[i]) {

        case 0:
        L_1++;
        break;

        case 1:
        L_2++;
        break;

        case 2:
        L_3++;
        break;

        case 3:
        L_4++;
        break;

        case 4:
        L_5++;
        break;

        case 5:
        L_6++;
        break;


    }



    i++;
    }
    while (i<roladas);

    printf ("\nO numero de roladas de face 1: %d",L_1);
    printf ("\nO numero de roladas de face 2: %d",L_2);
    printf ("\nO numero de roladas de face 3: %d",L_3);
    printf ("\nO numero de roladas de face 4: %d",L_4);
    printf ("\nO numero de roladas de face 5: %d",L_5);
    printf ("\nO numero de roladas de face 6: %d",L_6);




return 0;
}

#include <stdio.h> ////// reprovação, exame ou aprovado
    int main (){
        float prova_1, peso_1, prova_2, peso_2, media;

        printf ("Digite a sua a nota da prova 1: ");
        scanf ("%f",&prova_1);

        printf ("\n");

        printf ("Digite o peso da prova 1: ");
        scanf ("%f",&peso_1);

        printf ("\n");

        printf ("Digite a sua a nota da prova 2: ");
        scanf ("%f",&prova_2);

        printf ("\n");

        printf ("Digite o peso da prova 2: ");
        scanf ("%f",&peso_2);

        printf ("\n");

        media = ((prova_1 * peso_1)+(prova_2 * peso_2))/ (peso_1 + peso_2);
        printf ("Sua media: %.2f",media);

        printf ("\n");

        if (media < 3) {
            printf ("EXAME");

        }
        else {
            if (media < 5) {
                printf ("RECUPERACAO");

            }
            else {
                printf ("APROVADO");
            }

        }



        return 0;
    }

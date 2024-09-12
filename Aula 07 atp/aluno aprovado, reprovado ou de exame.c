#include <stdio.h>
    int main (){
    float media, frequencia;
    printf ("Informe sua media (0-10): ");
    scanf ("%f",&media);
    printf ("Informe sua frequencia (0-100): ");
    scanf ("%f",&frequencia);


    if (media >= 0 && media <= 10 && frequencia >= 0 && frequencia <=100 ){


        if (media > 5 && frequencia >= 70) {
        printf ("Aluno aprovado");
        }
        else {
                if (media > 3 && media <= 5 && frequencia >= 70) {
                printf ("Aluno de exame");
        }
                else
                    if (media < 3 || frequencia < 70){
                    printf ("Aluno reprovado");
            }
            else {}
    }
    }
    else {
        printf ("Valores invalidos"); }



return 0;
}

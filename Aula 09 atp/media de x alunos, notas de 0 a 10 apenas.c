#include <stdio.h>
    int main (){
    int alunos, contador=0;
    float media, soma=0, notas;
    printf ("Forneca a quantidade de alunos: ");
    scanf ("%d",&alunos);


    while (contador < alunos){
        printf ("Digite a nota do aluno %d: ",contador+1);
        scanf ("%f",&notas);

        if (notas < 0 || notas > 10){
            printf ("Digite novamente");
            printf ("\n");
            printf ("Digite a nota do aluno %d: ",contador+1);
            scanf ("%f",&notas);}


        soma = soma + notas;

        contador++;
    }
    media = soma / alunos;
    printf ("A media dos alunos: %.2f",media);


return 0;

    }

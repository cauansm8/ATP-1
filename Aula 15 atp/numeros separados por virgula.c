#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
int soma=0, tam, i2=0, n;
char string[20], nst[20];
printf ("Informe numeros separados por virgulas: ");
fgets (string,20,stdin);

tam = strlen (string);

do{
int i=0;
memset(nst, 0, sizeof(nst)); ////////////// PESQUISEI COMO LIMPA MEM�RIA DE STRING
do{

    nst[i] = string[i2]; //////////// NN FOI NECESS�RIO STRCPY QUE EU ESTAVA USANDO
                         ///////// passa para uma nova string somente os numeros

i2++;
i++;

}
while (string[i2]!= ',' && i2<tam); /////// passa as informações enquanto é diferente de virgula E menor q o tamanho da string
n = atoi (nst);

soma = soma + n;  ///// soma esses numeros
i2++;

}
while (i2<tam);
printf("\nA soma: %d\n",soma);




return 0;
}

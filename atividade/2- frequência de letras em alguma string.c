#include <stdio.h>
#include <string.h>
int main (){

int i=0,i2=0; ///// variaveis de loop

char string[50];   /////// string

int cont [26] = {0};   ////// contadores para cada letra //// inicialmente cada contador tem zero apari��es

printf ("Informe uma palavra: ");
gets (string);


do{

i2=0;

 do{ ///////////// loop para ver quantas letras ? aparecem
    if (string[i2]=='a'+i){ ///////// a soma com o i serve para pular para a pr�xima letra
        cont[i]++;
    }



    i2++; ////// pula para a proxima letra de compara��o da string
 }
 while (i2<50);





i++; ////////////// pula para o proximo contador
}
while (i<50);

i=0;
do{
 if (cont[i]>=1){ ///////// apenas vai mostrar as letras que aparecem uma vez ou mais
    printf ("%c: %d ocorrencia(s) \n", i+'a', cont[i]); ////////// mostra a letra e quantas vezes ela apareceu
 }

    i++; //////////// pula para a pr�xima letra

}
while (i<26);

return 0;
}

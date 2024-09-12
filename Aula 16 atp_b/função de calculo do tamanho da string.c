#include <stdio.h>
#include <string.h>
#include <stdlib.h>
////////////////// QUANDO USAR RETURN, USA ALGUMA VARIAVEL IGUALANDO COM A FUNÇÃO
int tamanho (char *frase){
    int tamanho = strlen (frase);

    return tamanho;

}





int main (){
int qnt;
char string[100];
gets (string);

qnt = tamanho (&string);
printf ("\nA quantidade de caracteres: %d",qnt);




return 0;
}

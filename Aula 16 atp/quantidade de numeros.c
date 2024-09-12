#include <stdio.h>

int quantidade(char string[]){
    int i=0, cont=0;
    do{
        if (string[i]>='0' && string[i]<='9'){
            cont++;
        }
    i++;

    }
    while (string[i]!='\0');
    return cont; //////////// usa RETURN pq pede resultado (retorno) após a função
}




int main (){
int qnt=0;

char string[20];
printf ("Informe uma string: ");
gets (string);

qnt = quantidade (string);
printf ("\nA quantidade de numeros: %d\n",qnt);




return 0;
}

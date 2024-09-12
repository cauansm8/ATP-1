#include <stdio.h>

void remover_espacos (char frase[]){
    int i=0;
    do{
    if (frase[i]==' ' && frase[i+1]==' '){
        frase [i] = frase [i+1];
        frase [i+1] = frase [i+2];
    }


    i++;
    }
    while (frase[i]!='\0');
}


int main (){

char string[100];
printf ("Informe uma string com espacos desnecessarios (remove apenas um espaco extra): ");
gets (string);
remover_espacos(string);
printf ("\nA nova string: %s",string);



return 0;
}

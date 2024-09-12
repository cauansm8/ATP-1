#include <stdio.h>

int digito (char palavra[]){
int i=0;
    do {
    if ((palavra[i]>='0') && (palavra[i]<='9')){
    i++;

    }
    else {
        int digito = 0;
        return digito;

    }




    }
    while (palavra[i]!='\0');
    int digito = 1;
    return digito;
}




int main (){
int verf;
char string[100];
printf ("Informe uma string para verificar se apenas ha digitos: ");
gets (string);

verf = digito (string);
printf ("O valor da verificacao: %d",verf);







return 0;
}

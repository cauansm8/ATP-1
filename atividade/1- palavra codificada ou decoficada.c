#include <stdio.h>
#include <string.h>
void codificar (char frase[50], int n){
   int  i=0;
   int qnt = strlen (frase);
    do{
       frase[i] = frase[i] + n;

    i++;

    }
    while (i<qnt);


}
void decodificar (char frase[50], int n){
   int  i=0;
   int qnt = strlen (frase);

    do{
        frase[i]= frase[i] - n;

    i++;

    }
    while (i<qnt);

}





int main (){
    int k;
    printf ("Informe um inteiro entre 1 e 10: ");
    scanf ("%d",&k);
    if (k<1 || k>10){
        printf ("Numero fora do intervalo \n");
        return 1;
    }

    fflush (stdin);
    char string [50];
    printf ("Informe uma frase: ");
    gets (string);


    fflush (stdin);

    char escolha;
    printf ("Voce deseja codificar(c) ou decodificar(d): ");
    scanf ("%c",&escolha);

    if (escolha=='c' || escolha == 'C'){
        codificar (string,k);
        printf ("A frase codificada: %s\n",string);
    }
    if (escolha=='D' || escolha == 'd'){
        decodificar (string,k);
        printf ("A frase decodificada: %s\n",string);

    }


return 0;
}

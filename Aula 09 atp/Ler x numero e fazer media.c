#include <stdio.h>
    int main (){
    int n, soma=0,contador=0,quantidade;
    float media;
    printf ("Digite a quantidade de variaveis: ");
    scanf ("%d",&quantidade);
while (contador < quantidade){
    printf ("Digite o %dvalor: ",contador+1);
    scanf ("%d",&n);
    soma = soma + n;
    contador++;


}
    printf ("A soma: %d",soma);
    printf ("\n");
    media  = soma / (float)quantidade;
    printf ("A media: %.2f",media);

return 0;
}

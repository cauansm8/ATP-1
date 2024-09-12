#include <stdio.h>
#include <string.h>

int main (){

char string[20],temp;
int i=1,l=0,t=0,tamanho;
printf ("Informe uma palavra: ");
gets (string);
tamanho = strlen (string);



do{ ////////////// loop do t
int i=0;
int l=0; /////////// loop das trocas
do{
if (string[t]<string[i]){
    temp = string[i];
    string [i]=string[t];
    string[t] = temp;


    }
    i++;
    l++;
}
while (l<tamanho);
t++;


}
while (t<tamanho);

printf ("\nA nova palavra em ordem alfabetica: %s",string);


return 0;
}

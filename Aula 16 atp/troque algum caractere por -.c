
void alterar (char string[], char caracter){
    int i=0;
    do{
        if (string[i]==caracter){
            string[i]='_';
        }

    i++;

    }
    while (string[i]!= '\0'); ////////////// nao precisa de RETURN, pois ele ja dá resultado


}



#include <stdio.h>
int main (){
char str[100], c;
printf ("Informe uma string: ");
gets (str);
printf ("\n");
printf ("Informe um caractere: ");
scanf ("%c",&c);
alterar (str, c);
printf ("\nA nova string: %s",str);







return 0;
}

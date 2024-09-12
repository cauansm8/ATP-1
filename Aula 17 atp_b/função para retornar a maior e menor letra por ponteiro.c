#include <stdio.h>
void maior_menor (char str[51], char *maior, char *menor){
    int i=1;
    *maior = str[0];
    *menor = str[0];
    do{
        if (*maior<str[i]){
            *maior = str[i];
        }
        if (*menor>str[i]){
            *menor = str[i];
        }
        i++;
    }
    while (str[i]!='\0');
    printf ("A maior letra: %c\n",*maior);
    printf ("A menor letra: %c\n",*menor);



}



int main (){

char string[51], Ma, Me;
printf ("Informe uma string: ");
gets (string);

maior_menor (string,&Ma,&Me);

return 0;
}

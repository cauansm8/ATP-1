#include <stdio.h>
    int main (){

    char string [10], n_string[10];
    int i=0;

    printf ("Informe uma string em binario com 10 elementos: ");
    fgets (string,10,stdin);

    do{
    if (string[i]=='0'){
        n_string[i] = '1';

    }
    else if (string[i]='1') {
        n_string[i] = '1';

    }


     printf ("%c",n_string[i]);

    i++;
    }
    while (i<10);







return 0;
}

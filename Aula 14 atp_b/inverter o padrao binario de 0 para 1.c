#include <stdio.h>
    int main (){

    char p_b[11],i=0,p_bn[11];

    printf ("Informe um padrao binario de ate 10 elementos: ");
    fgets (p_b,11,stdin);

    do {

    if (p_b[i]=='0'){
        p_bn[i]='*';
    }
    else {
        p_bn[i]='1';
    }

    printf ("%c",p_bn[i]);
    i++;
    }
    while (p_b[i]!='\0');







return 0;
    }

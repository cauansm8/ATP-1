#include <stdio.h>
#include <string.h>
int main (){

    int i=1;
    char string [100];
    printf ("Informe uma string: ");
    fgets (string,100,stdin);

    if (string [0]>='a' && string [0]<='z'){
        string [0] = string [0] - 32;
    }
    do{
    if (string[i]==' '){
        if (string[i+1]>= 'a' && string [i+1]<='z'){
            string [i+1] = string [i+1] - 32 ;
        }
        else {
            string [i+1] = string [i+1];
        }
    }
    i++;



    }
    while (string[i]!= '\0');

    printf ("A nova string: %s",string);





return 0;
}

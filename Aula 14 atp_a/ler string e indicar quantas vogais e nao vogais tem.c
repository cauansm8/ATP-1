#include <stdio.h>
    int main (){

    char string[20];
    printf ("Informe uma frase totalmente minuscula com possibilidade de ate 20 caracteres: ");
    fgets (string,20,stdin);
    int i=0,v=0,n_v=0;
    do{
    if (string[i]== 'a' || string[i]=='e' || string[i]== 'i' || string[i]== 'o' || string[i]=='u'){
        v++;
    }
    else {
        n_v++;
    }



    i++;
    }
    while (i<20);

    printf ("O numero de vogais: %d",v);
    printf ("\nO numero de nao vogais (consoantes e espacos): %d",n_v);







return 0;
}

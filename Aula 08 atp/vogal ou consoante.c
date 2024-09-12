#include <stdio.h>
    int main (){
    char letra;
    printf ("Insira uma letra: ");
    scanf ("%c",&letra);

    switch (letra){


    case 'a':
    printf ("Vogal");
    break;

    case 'e':
    printf ("Vogal");
    break;

    case 'i':
    printf ("Vogal");
    break;

    case 'o':
    printf ("Vogal");
    break;

    case 'u':
    printf ("Vogal");
    break;


    default:
    printf ("Consoante, simbolo ou numero incorreto");
    break;


    }
return 0;
}

#include <stdio.h>
    int main (){
    int ano, nascimento, idade;
    printf ("Informe o ano atual: ");
    scanf ("%d",&ano);
    printf ("Informe o ano de nascimento: ");
    scanf ("%d",&nascimento);
    idade = ano - nascimento;
    printf ("A idade: %d",idade);



return 0;
}

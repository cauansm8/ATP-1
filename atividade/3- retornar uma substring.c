#include <stdio.h>
void substr (char frase_i[50], char frase_f[50], int ini, int fim){
    int i=0;
    do{

    frase_f[i] = frase_i[ini];

    i++;
    ini++;
    }
    while (ini<=fim);
    printf ("%s\n",frase_f);

}



int main (){


    char string[50], string_2[50];
    printf ("Informe uma string: ");
    gets (string);

    fflush (stdin);

    int in, fm;
    printf ("Informe o inicio do intervalo: ");
    scanf ("%d",&in);
    printf ("Informe o fim do intervalo: ");
    scanf ("%d",&fm);

    substr (string, string_2, in, fm);



return 0;
}

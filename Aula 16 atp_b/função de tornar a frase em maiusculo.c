#include <stdio.h>
char maiusculo (char p_ou_f[]){
    int i=0;
    do{
        if ((p_ou_f[i]>='a') && (p_ou_f[i]<='z')){
            p_ou_f[i] = p_ou_f[i] - 32; ///////// joga o caractere para maiúsculo na tabela ASCII
        }
        i++;
    }
    while (p_ou_f[i]!= '\0');
    return p_ou_f;
}






int main (){
    int string[100];
    printf ("Informe uma string: ");
    fgets (string,100,stdin);
    maiusculo (string);
    printf ("\n%s\n",string);



return 0;
}

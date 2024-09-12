#include <stdio.h>
#include <string.h>

int main (){

    char string[20], temp;
    int tamanho;

    printf("Digite uma palavra: ");
    gets(string);

    tamanho = strlen(string);

    for(int i = 0; i < tamanho - 1; i++){
        for(int k = 0; k < tamanho - i - 1; k++){
            if(string[k] > string[k+1]){

                temp = string[k+1];
                string[k+1] = string[k];
                string[k] = temp;
            }
        }
    }

    printf("Palavra em ordem alfabetica: %s", string);

return 0;}

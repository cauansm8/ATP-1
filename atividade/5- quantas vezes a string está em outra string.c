#include <stdio.h>
#include <string.h>
void vezes (char string[50],char string_2[50]){ //////// a maior parte foi reutilizada do outro programa
    int i=0,x, vezes=0;
    int qnt = strlen (string_2);
    do{         ///////////////// repetição até o fim da string 1
    int z=0;

        do{             /////////// repetição comparando string 1 e string 2
         if (string_2[0+z]==string[i+z]){
                x = 1;
         }
         else {
            x=0;     //////////// se deu x=0, fim do loop de comparação
         }

            z++;
        }
        while (z<qnt && x!=0);

        if (x==1){ //////////// se terminou a string 2 E x=1 (tudo igual), aumenta em 1 a quantidade de aparições
            vezes++;
        }




    i++;
    }
    while (string[i]!='\0');



printf ("A palavra de busca ocorre %d vez(es)\n",vezes);
}







int main (){

char string [50], string_2[50];
printf ("Informe uma string: ");
gets (string);

printf ("Informe a string de busca: ");
gets (string_2);




vezes (string, string_2);









return 0;
}

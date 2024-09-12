#include <stdio.h>
#include <string.h>
void verf (char string[50],char string_2[50]){
    int i=0,x;
    int qnt = strlen (string_2);
    do{
    int z=0;

        do{
         if (string_2[0+z]==string[i+z]){
                x = 1;
         }
         else {
            x=0;
         }

            z++;
        }
        while (z<qnt && x!=0);


    i++;
    }
    while (string[i]!='\0' && x!=1);

    if (x==1){
        printf ("A palavra de busca esta na string\n");

    }
    else {
        printf ("A palavra de busca nao esta na string\n");

    }


}






int main (){

char string [50], string_2[50];
printf ("Informe uma string: ");
gets (string);

printf ("Informe a string de busca: ");
gets (string_2);




verf (string, string_2);









return 0;
}

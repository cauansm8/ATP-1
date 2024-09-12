#include <stdio.h>
    int main (){


    int i=0,C=0;
    char string_1[50], string_2[50];

    printf ("Informe a primeira string: ");
    fgets (string_1,50,stdin);



    printf ("Informe a segunda string: ");
    fgets (string_2,50,stdin);



    do{
    if (string_1[i]!=string_2[i]){
        printf ("\nAs strings sao diferentes\n");
        return 1;
    }




    i++;

    }
    while (string_1[i]!='\0' || string_2[i]!='\0');



    printf ("\nAs string sao iguais");




return 0;
}

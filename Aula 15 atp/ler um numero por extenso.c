#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main (){
int quantidade,n;
char string [100];
printf ("Informe um numero entre 0 e 9999 na forma (abcd): ");
gets (string);



char sf[100];

    switch (string[0]){
    case '0':
    strcpy (sf, "");
    break;
    case '1':
    strcpy (sf, "mil ");
    break;
    case '2':
    strcpy (sf, "dois mil ");
    break;
    case '3':
    strcpy (sf, "tres mil ");
    break;
    case '4':
    strcpy (sf, "quatro mil ");
    break;
    case '5':
    strcpy (sf, "cinco mil ");
    break;
    case '6':
    strcpy (sf, "seis mil ");
    break;
    case '7':
    strcpy (sf, "sete mil ");
    break;
    case '8':
    strcpy (sf, "oito mil ");
    break;
    case '9':
    strcpy (sf, "nove mil ");
    break;
    }





    switch (string[1]){
    case '0':
    strcat (sf, "");
    break;
    case '1':
    strcat (sf, "cento ");
    break;
    case '2':
    strcat (sf, "duzentos ");
    break;
    case '3':
    strcat (sf, "trezentos ");
    break;
    case '4':
    strcat (sf, "quatrocentos ");
    break;
    case '5':
    strcat (sf, "quinhentos ");
    break;
    case '6':
    strcat (sf, "seiscentos ");
    break;
    case '7':
    strcat (sf, "setecentos ");
    break;
    case '8':
    strcat (sf, "oitocentos ");
    break;
    case '9':
    strcat (sf, "novecentos ");
    break;
    }


    switch (string[2]){
    case '0':
    strcat (sf, "");
    break;
    case '2':
    strcat (sf, "vinte ");
    break;
    case '3':
    strcat (sf, "trinta ");
    break;
    case '4':
    strcat (sf, "quarenta ");
    break;
    case '5':
    strcat (sf, "cinquenta ");
    break;
    case '6':
    strcat (sf, "sessenta ");
    break;
    case '7':
    strcat (sf, "setenta ");
    break;
    case '8':
    strcat (sf, "oitenta ");
    break;
    case '9':
    strcat (sf, "noventa ");
    break;
    }


    switch (string[3]){
    case '0':
    strcat (sf, "");
    break;
    case '1':
    strcat (sf, "um ");
    break;
    case '2':
    strcat (sf, "dois ");
    break;
    case '3':
    strcat (sf, "tres ");
    break;
    case '4':
    strcat (sf, "quatro ");
    break;
    case '5':
    strcat (sf, "cinco ");
    break;
    case '6':
    strcat (sf, "seis ");
    break;
    case '7':
    strcat (sf, "sete ");
    break;
    case '8':
    strcat (sf, "oito ");
    break;
    case '9':
    strcat (sf, "nove ");
    break;
    }


    if (string[3]=='0'){
    switch(string[2]){
    case '0':
    strcat (sf, "dez ");
    break;
    case '1':
    strcat (sf, "onze ");
    break;
    case '2':
    strcat (sf, "doze ");
    break;
    case '3':
    strcat (sf, "treze ");
    break;
    case '4':
    strcat (sf, "catorze ");
    break;
    case '5':
    strcat (sf, "quinze ");
    break;
    case '6':
    strcat (sf, "dezesseis ");
    break;
    case '7':
    strcat (sf, "dezessete ");
    break;
    case '8':
    strcat (sf, "dezoito ");
    break;
    case '9':
    strcat (sf, "dezenove ");
    break;
    }
    }


printf ("%s", sf);


return 0;
}


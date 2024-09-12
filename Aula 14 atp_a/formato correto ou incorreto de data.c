#include <stdio.h>
    int main (){

    char data[10];

                                                        ////////////// 0 1 2 3 4 5 6 7 8 9  10
    printf ("Informe uma data no padrao DD/MM/AAAA: "); ////////////// d d / m m / a a a a '\0'
    gets (data);


    if (data[2] =='/' && data[5] =='/' && data[10] == '\0') {
    printf ("\nFormato correto\n");
    }


    else {
        printf ("\nFormato incorreto\n");
    }




return 0;
}

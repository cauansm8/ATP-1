#include <stdio.h>
    int main (){
    int a=0, e=0, i=0, o=0, u=0,i_2=0;
    char string [30];

    printf ("Informe uma string: ");
    fgets (string, 30, stdin);



    do {

    switch (string[i_2]){
        case 'a':
        a++;
        break;

        case 'A':
        a++;
        break;

        case 'e':
        e++;
        break;

        case 'E':
        e++;
        break;

        case 'i':
        i++;
        break;

        case 'I':
        i++;
        break;

        case 'o':
        o++;
        break;

        case 'O':
        o++;
        break;

        case 'u':
        u++;
        break;

        case 'U':
        u++;
        break;


    }
    i_2++;



    }
    while (i_2<30);

    printf("\nLetra 'a': %d",a);
    printf("\nLetra 'e': %d",e);
    printf("\nLetra 'i': %d",i);
    printf("\nLetra 'o': %d",o);
    printf("\nLetra 'u': %d",u);








return 0;
}

#include <stdio.h>
    int main(){
    int idade, pessoas, contador=0, q_a=0, q_p=0, q_v=0, q_c=0, q_o=0;
    char olho;

    printf ("Digite a quantidade de pessoas: ");
    scanf ("%d",&pessoas);
    fflush (stdin);

    while (contador < pessoas){
    printf ("Digite a sua idade pessoa n%d: ",contador+1);
    scanf ("%d",&idade);
    fflush (stdin);
    printf ("Digite qual a cor do seu olho (azul,preto,verde,castanho,outro) pessoa n%d: ",contador+1);
    scanf ("%c",&olho);
    'A' == 'a', 'azul', 'Azul';
    'P' == 'p', 'preto', 'Preto';
    'V' == 'v', 'verde', 'Verde';
    'C' == 'c', 'castanho', 'Castanho';
    'O' == 'o', 'outro', 'Outro';


    contador++;

    }
     switch (olho){
    case 'a':
        q_a++;
        break;
    case 'p':
        q_p++;
        break;
    case 'v':
        q_v++;
        break;
    case 'c':
        q_c++;
        break;
    case 'o':
        q_o++;
        break;
    default:
        printf ("Cor incorretamente escrita");
        break;
    printf ("A quantidade de pessoas com olho azul: %d",q_a);
    printf ("\n");
    printf ("A quantidade de pessoas com olho preta: %d",q_p);
    printf ("\n");
    printf ("A quantidade de pessoas com olho verde: %d",q_v);
    printf ("\n");
    printf ("A quantidade de pessoas com olho castanho: %d",q_c);
    printf ("\n");
    printf ("A quantidade de pessoas com outra cor de olho: %d",q_o);
    printf ("\n");
return 0;
}
    }

#include <stdio.h>
    int main (){
    int trabalho, idade;
    printf ("Idade: ");
    scanf ("%d",&idade);
    printf ("Trabalho: ");
    scanf ("%d",&trabalho);

    if ((idade >= 65 )  || (trabalho >= 30) || (trabalho >= 25 && idade>= 60)) {
        printf ("Pode se aposentar");
    }
    else {
        printf ("Ainda nao pode se aposentar");
    }
return 0;
}

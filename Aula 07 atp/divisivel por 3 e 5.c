#include <stdio.h>
    int main (){
    int a;
    printf ("Digite o numero: ");
    scanf ("%d",&a);
    if (a%3 == 0 && a%5==0){
        printf ("Numero divisivel por 3 e 5");
    }
    else {
        printf ("Numero divisivel nem por 3, nem por 5 ou por nenhum os dois");
    }

return 0;
}

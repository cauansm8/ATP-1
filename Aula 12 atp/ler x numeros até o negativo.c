#include <stdio.h>
    int main (){
    int num, maior, menor;

    printf ("Digite o numero: ");
    scanf ("%d",&num);
    maior = num;
    menor = num;

    do {
    printf ("Digite o numero: ");
    scanf ("%d",&num);
    if (num > maior){
    maior = num;
        }
    if (menor > num){
    menor = num;
    }
    }
    while (num>=0);
    printf ("O menor: %d\n",menor);
    printf ("O maior: %d\n",maior);
return 0;
}

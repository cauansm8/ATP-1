#include <stdio.h>
void fatorial (int n, int *fat){
    *fat = 1;
    do{
        *fat = *fat * n;


    n--;
    }
    while (n!=1);
    printf ("O fatorial: %d",*fat);

}


int main (){

int num, fat;

printf ("Informe um numero: ");
scanf ("%d",&num);
fatorial (num, &fat);



return 0;
}

#include <stdio.h>
    int main () {
    int n;
    printf ("Digite um numero: ");
    scanf ("%d",&n);
    if (n==2 || n==3 || n==5){
            printf ("O numero %d e primo",n);}
    else {
    if (n%2==0 || n%3==0 || n%5==0){
        printf ("O numero %d nao e primo",n);
    }
    else {printf ("O numero %d e primo",n);}
    }


return 0;
}

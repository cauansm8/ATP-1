#include <stdio.h>
void fatorial (int num){
    int fatorial=1;
    do{
    fatorial = fatorial * num;
    num--;

    }
    while (num>=1);
    printf ("%d",fatorial);


}





int main (){

    int n;
    printf ("Informe um numero: ");
    scanf ("%d",&n);
    fatorial (n);






return 0;
}

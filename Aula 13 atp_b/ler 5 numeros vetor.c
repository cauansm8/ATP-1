#include <stdio.h>
    int main (){
    int n[5], i=0;

    do {
    printf ("Digite o numero %d: ",i+1);
    scanf ("%d",&n[i]);

    i++;
    }
    while (i<5);
    printf ("Os numeros salvos: %d,%d,%d,%d,%d",n[0],n[1],n[2],n[3],n[4]);

return 0;
}

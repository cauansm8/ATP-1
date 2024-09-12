#include <stdio.h>
int main (){
    int x=2, p_n,c;
    printf ("Digite quantos numeros da seq: ");
    scanf ("%d",&c);
    printf ("O numero 1 da seq: 1\n");
    printf ("O numero 2 da seq: 1\n");
    int i[p_n];
    p_n = c;
    i[0] = 1;
    i[1] = 1;

    do {

        i[p_n+2] = i[p_n]+i[p_n+1]; ////// x=0 i[2] = i[0]+i[1]
        printf ("O numero %d da seq: %d\n",x+1,i[p_n]);
    x++;

    p_n++;
    }
    while (x<=c);

return 0;
}

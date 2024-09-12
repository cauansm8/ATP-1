#include <stdio.h>
    int main (){
    int numero, x, valor;
    printf ("-100 - Cachorro quente - 7,00 \n-101 - Bauru simples   - 5,00 \n-102 - Hamburguer      - 10,00 \n-103 - Cheeseburguer   - 12,00 \n-104 - Refrigerante    - 3,00 \n");
    scanf ("%d",&numero);
    printf ("Indique a quantidade: ");
    scanf ("%d",&x);

    switch (numero) {

    case 100:

    valor = 7 * x;
    printf ("Valor total: %d",valor);
    break;

    case 101:

    valor = 5 * x;
    printf ("Valor total: %d",valor);
    break;

    case 102:

    valor = 10 * x;
    printf ("Valor total: %d",valor);
    break;

    case 103:

    valor = 12 * x;
    printf ("Valor total: %d",valor);
    break;

    case 104:

    valor = 3 * x;
    printf ("Valor total: %d",valor);
    break;

    default:
    printf ("Pedido incorreto");
    break;




}
return 0;
}

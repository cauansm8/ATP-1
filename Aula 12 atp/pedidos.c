#include <stdio.h>

int main (){
    int q_it, i=0,c_i, q_ip,v[105];
    printf
    ("Cachorro quente - 100 - 10,00 \nBauru simples - 101 - 12,00 \nBauru com ovo - 102 - 15,00\nHamburguer - 103 - 11,00\nCheeseburguer - 104 - 15,00\nRefrigerante - 105 - 3,00\n");

    printf ("\nInforme a quantidade de itens deste pedido: ");
    scanf ("%d",&q_it);
    v[100]=0;
    v[101]=0;
    v[102]=0;
    v[103]=0;
    v[104]=0;
    v[105]=0;


    do {

            printf ("Informe o codigo do pedido: ");
            scanf ("%d",&c_i);
            if (c_i<100 || c_i>105){
                printf ("\nCodigo incorreto - Perda de um pedido\n");

            }




            if (c_i==100){
                printf ("Informe a quantidade de cachorro quente: ");
                scanf ("%d",&q_ip);
                v[100] = q_ip*10;
                printf ("Subtotal desse produto: %d\n",v[100]);

            }


            if (c_i==101){
                printf ("Informe a quantidade de bauru simples: ");
                scanf ("%d",&q_ip);
                v[101] =q_ip*12;
                printf ("Subtotal desse produto: %d\n",v[101]);
            }


            if (c_i==102){
                printf ("Informe a quantidade de bauru com ovo: ");
                scanf ("%d",&q_ip);
                v[102] = q_ip*15;
                printf ("Subtotal desse produto: %d\n",v[102]);

            }


            if (c_i==103){
                printf ("Informe a quantidade de hamburguer: ");
                scanf ("%d",&q_ip);
                v[103] =q_ip*11;
                printf ("Subtotal desse produto: %d\n",v[103]);

            }


            if (c_i==104){
                printf ("Informe a quantidade de cheeseburguer: ");
                scanf ("%d",&q_ip);
                v[104] = q_ip*15;
                printf ("Subtotal desse produto: %d\n",v[104]);
            }


            if (c_i==105){
                printf ("Informe a quantidade de refrigerante: ");
                scanf ("%d",&q_ip);
                v[105] = q_ip*3;
                printf ("Subtotal desse produto: %d\n",v[105]);

            }

               i++;
            }


    while (i<q_it);

    printf ("Total geral: %d",v[100]+v[101]+v[102]+v[103]+v[104]+v[105]);




return 0;
}

#include <stdio.h> //// custo de uma viajem
    int main (){
    float consumo, preco, distancia, todo;
    printf ("Consumo do carro em km/l: ");
    scanf ("%f",&consumo);
    printf ("Digite o valor do combustivel em litros: ");
    scanf ("%f",&preco);
    printf ("Digite o valor da distancia em km: ");
    scanf ("%f",&distancia);
    todo = (distancia/consumo)*preco;
    printf ("O gasto total: %f",todo);
    return 0;
    }

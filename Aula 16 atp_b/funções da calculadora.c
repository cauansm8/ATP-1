float soma (float n1, float n2){
   float soma = n1+n2;
    return soma;
}
float subtracao (float n1, float n2){
    float subtracao = n1 - n2;
    return subtracao;
}
float multiplicacao (float n1, float n2){
  float  multiplicacao = n1*n2;
    return multiplicacao;
}
float divisao (float n1, float n2){
  float  divisao = n1 / n2;
    return divisao;
}






#include <stdio.h>
int main(){
    float n1, n2, sm, sb, mt, dv;
    printf ("Informe o numero 1: ");
    scanf ("%f",&n1);
    printf ("Informe o numero 2: ");
    scanf ("%f",&n2);
    sm = soma (n1,n2);
    sb = subtracao (n1,n2);
    mt = multiplicacao (n1,n2);
    dv = divisao (n1,n2);

    printf ("soma: %.2f |||| subtracao: %.2f |||| multiplicacao: %.2f |||| divisao: %.2f\n",sm,sb,mt,dv);




return 0;
}

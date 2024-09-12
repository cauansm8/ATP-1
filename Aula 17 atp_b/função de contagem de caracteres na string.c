#include <stdio.h>
void contagem (char str[51], int *vg, int *cs, int *nms){
    int i =0;
    *vg=0;
    *cs=0;
    *nms=0;
    do{
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
            str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            (*vg)++;
        }
        if (str[i]>='0' && str[i]<='9'){
            (*nms)++;
        }
        if ((str[i]>'9') && (str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' &&
            str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U')){
            (*cs)++;
        }

    i++;
    }
    while (str[i]!='\0');

printf ("A quantidade de vogais: %d\n",*vg);
printf ("A quantidade de consoantes: %d\n",*cs);
printf ("A quantidade de numeros: %d\n",*nms);


}





int main (){
char string[51];
int vogais=0, n=0, cons=0;

printf ("Informe uma string(apenas com letras e numeros): ");
gets (string);

contagem (string, &vogais, &cons, &n);



return 0;
}

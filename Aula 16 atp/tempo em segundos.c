int tempo (int horas, int minutos, int segundos){
        int tempo = (horas * 60 * 60) + (minutos * 60) + segundos;
        return tempo;

}

#include <stdio.h>
int main(){
    int h, m ,s, t_s;
    printf ("Informe as horas: ");
    scanf ("%d",&h);
    printf ("Informe os minutos: ");
    scanf ("%d",&m);
    printf ("Informe os segundos: ");
    scanf ("%d",&s);

    t_s = tempo (h,m,s);
    printf ("O tempo total em segundos: %d",t_s);
return 0;
}

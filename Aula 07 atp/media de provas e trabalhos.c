#include <stdio.h>
    int main (){
    float media_t, media_p, media_f;
    printf ("Digite a media de trabalhos: ");
    scanf ("%f",&media_t);
    printf ("Digite a media de provas: ");
    scanf ("%f",&media_p);

    if (media_t >= 5 && media_p >= 5){
        media_f = (media_t + media_p)/2;
        printf ("A media final: %.2f",media_f);
    }
    else {
            if (media_t < media_p) {
            printf ("A media final: %.2f",media_t);
            }
            else {
            printf ("A media final: %.2f",media_p);
            }




return 0;
    }
    }

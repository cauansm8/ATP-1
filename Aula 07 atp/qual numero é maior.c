#include <stdio.h> ///////////// qual número é maior
    int main (){
    int a, b, c;
    printf ("Informe o primeiro numero: ");
    scanf ("%d",&a);
    printf ("Informe o segundo numero: ");
    scanf ("%d",&b);
    printf ("Informe o terceiro numero: ");
    scanf ("%d",&c);

if ( (a > b) && (a > c) && (b > c)){
    printf ("A ordem: %d,%d,%d",c, b, a);
}

if ( a > b && a>c && c>b ){
    printf ("A ordem: %d,%d,%d",b, c, a);
    }


if ( b>a && b>c && a>c){
        printf ("A ordem: %d,%d,%d: ",c, a, b);
        }
if ( b>a && b>c && c>a){
        printf ("A ordem: %d,%d,%d: ",a, c, b);
        }
if ( c>a && c>b && b>a){
        printf ("A ordem: %d,%d,%d: ",a, b, c);
        }
if ( c>a && c>b && a>b){
        printf ("A ordem: %d,%d,%d: ",b, a, c);
        }





return 0;
}

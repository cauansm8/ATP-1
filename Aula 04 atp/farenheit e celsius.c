#include<stdio.h>  /// Fahrenheit e celsius
int main() {
  int celsius;
  float fahrenheit;
  printf("qual o valor da temperatura em celsius: ");
  scanf ("%d", &celsius);
  printf ("\n");
  fahrenheit = celsius * 1.8 +32;
  printf ("a temperatura em fahrenheit: %.0f",fahrenheit);
  return 0;






}

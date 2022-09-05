#include <stdio.h>

int main(void) {
  float t, C, K, F;
  char x;

  scanf("%f\n", &t);
  scanf("%c", &x);

  if (x == 'C') {

    C = t;
    F = (t * 1.8) + 32;
    K = t + 273.15;

    printf("Celsius: %.2f\n%", C);
    printf("Farenheit: %.2f\n%", F);
    printf("Kelvin: %.2f\n%", K);
  }

  if (x == 'F') {

    C = (t - 32) / 1.8;
    F = t;
    K = C + 273.15;

    printf("Celsius: %.2f\n%", C);
    printf("Farenheit: %.2f\n%", F);
    printf("Kelvin: %.2f\n%", K);
  }

  if (x == 'K') {

    C = (t - 32) * 1.8;
    F = -273.15;
    K = (t * 1.8) + 32;

    printf("Celsius: %.2f\n%", C);
    printf("Farenheit: %.2f\n%", F);
    printf("Kelvin: %.2f\n%", K);
  }

  return 0;
}
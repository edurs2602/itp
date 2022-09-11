#include <math.h>
#include <stdio.h>

int main(void) {
  float minTempo, compTempo;
  int saida = -1, compApto = -1, serie = 0;

  scanf("%f", &minTempo);
  scanf("%f", &compTempo);

  if (compTempo <= minTempo) {
    compApto += 1;
  }

  while (compTempo != saida) {
    scanf("%f", &compTempo);

    if (compTempo <= minTempo) {
      compApto += 1;
    }
  }

  if (compApto > 0) {
    serie += 1;
  }

  if (compApto > 8) {
    serie += floor(compApto / 8);
  }

  printf("%d ", compApto);
  printf("%d", serie);

  return 0;
}
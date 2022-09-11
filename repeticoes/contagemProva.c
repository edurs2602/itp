#include <stdio.h>

int main(void) {
  int equipe, C = 0, S = 0, L = 0, total;
  char X, F;

  scanf("%d", &equipe);

  for (int i = 0; i < equipe; ++i) {
    scanf("%c", &X);
    while (X != 'F') {
      scanf("%c", &X);

      if (X == 'C') {
        C += 1;
      }
      if (X == 'S') {
        S += 1;
      }
      if (X == 'L') {
        L += 1;
      }
    }
  }

  total = (C + S + L);

  printf("%d %d %d %d", C, S, L, total);

  return 0;
}
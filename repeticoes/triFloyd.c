#include <stdio.h>

int main(void) {
  int i, j, rows, count = 1;

  scanf("%d", &rows);

  if (rows <= 0) {
    printf("Você entrou com %d, tente de novo na próxima", rows);
  } else {
    for (i = 0; i < rows; i++) {
      for (j = 0; j <= i; j++) {
        printf("%d ", count);
        count++;
      }
      printf("\n");
    }
  }
  return 0;
}
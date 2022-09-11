#include <stdio.h>

int main(void) {
  int qntd, i, j;
  char let;

  scanf("%d\n", &qntd);
  scanf("%c", &let);

  int conta = qntd - 1;

  for (i = 0; i < conta; i++) {
    for (j = 0; j < qntd; j++) {
      if (i == j || ((i + j) == conta - 1)) {
        printf("%c", let);
      } else {
        printf(" ");
      };
    };
    printf("\n");
  };

  return 0;
}
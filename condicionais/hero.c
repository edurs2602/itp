#include <stdio.h>

int main(void) {
  int qntd;
  int nvl_hero;
  int nvl_mnst;

  scanf("%d", &qntd);
  scanf("%d", &nvl_hero);
  scanf("%d", &nvl_mnst);

  if ((qntd >= 1 && nvl_hero >= 2 || qntd >= 3 && nvl_hero >= 1) &&
      nvl_mnst == 1) {
    printf("Heróis vencerão!");
  } else {
    printf("Melhor chamar Saitama!");
  }

  if ((qntd >= 1 && nvl_hero == 3 || qntd >= 3 && nvl_hero >= 2) &&
      nvl_mnst == 2) {
    printf("Heróis vencerão!");
  } else {
    printf("Melhor chamar Saitama!");
  }

  if ((qntd >= 1 && nvl_hero == 4 || qntd >= 3 && nvl_hero == 3) &&
      nvl_mnst == 3) {
    printf("Heróis vencerão!");
  } else {
    printf("Melhor chamar Saitama!");
  }

  if ((qntd >= 1 && nvl_hero == 5 || qntd >= 3 && nvl_hero == 4) &&
      nvl_mnst == 4) {
    printf("Heróis vencerão");
  } else {
    printf("Melhor chamar Saitama!");
  }

  if (nvl_mnst == 5 && nvl_hero == 5) {
    printf("Heróis vencerão");
  } else {
    printf("Melhor chamar Saitama!");
  }

  return 0;
}

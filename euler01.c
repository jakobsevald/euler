#include <stdio.h>

int main()
{
  int resultat = 0;

  for (int i = 0; i < 1000; i = i + 3) {
    resultat = resultat + i;
  }

  for (int i = 0; i < 1000; i = i + 5) {
    resultat = resultat + i;
  }

  for (int i = 0; i < 1000; i = i + 15) {
    resultat = resultat - i;
  }

  printf("%d\n", resultat);
  return 0;
}

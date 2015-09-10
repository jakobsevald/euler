#include <stdio.h> 

int main()
{
  int fib1 = 1;
  int fib2 = 1;
  int temp;
  int resultat = 0;

  while (fib2 <= 4000000) {
    temp = fib2;
    fib2 = fib1 + fib2;
    fib1 = temp;

    if (!(fib2 & 1)) {
      resultat += fib2;
      printf("Fibonnachi: %d\n", fib2);
    }
  }

  printf("Og resultatet er: %d\n", resultat);
  return 0;
}

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main() {
  long long a, x;

  printf("Enter a: ");
  scanf("%lld", &a);
  printf("Enter x: ");
  scanf("%lld", &x);

  long res = a;
  for (int i = 1; i < x; i++) res *= a;

  printf("A to the power of x: %ld\n", res);

  return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
  double a, b;
  printf("Enter first variable (a): ");
  scanf("%lf", &a);
  printf("Enter second variable (b): ");
  scanf("%lf", &b);
  a = a + b;
  b = a - b;
  a = a - b;

  printf("a = %.2lf, b = %.2lf\n", a, b);
    
  return 0;
}

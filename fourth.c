#include <stdio.h>
#include <math.h>

int main() {
  double a, b, c;
  printf("Enter first variable (a): ");
  scanf("%lf", &a);
  printf("Enter second variable (b): ");
  scanf("%lf", &b);
  c = a;
  a = b;
  b = c;
  printf("a = %.2lf, b = %.2lf\n", a, b);
    
  return 0;
}

#include <stdio.h>
#include <math.h>

int main () {

  double a, b, c;
  
  printf("Enter coefficient: ");
  scanf("%lf", &a);
  
  printf("Enter coefficient: ");
  scanf("%lf", &b);  
  
  printf("Enter coefficient: ");
  scanf("%lf", &c);

  if (a == 0) {
    printf("This is not a quadratic equation.\n");
    return 1;
  }

  double D = b * b - 4 * a * c;

  if (D > 0) {
    double x1 = (-b + sqrt(D)) / (2 * a);
    double x2 = (-b - sqrt(D)) / (2 * a);
    printf("Two roots: x1 = %.2lf, x2 = %.2lf\n", x1, x2);
  } else if (D == 0) {
      double x = -b / (2 * a);
      printf("Root of the equation: x = %.2lf\n", x);
  } else {
      printf("Equation has no roots\n");
  }  

  return 0;
}

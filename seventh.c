#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <float.h>

#define PI 3.14159265358979323846

double integ(double a, int x) {
  double res = 1.0;
  int abs_x = abs(x);
    
  for (int i = 0; i < abs_x; i++) {
    res *= a;
  }
     
  return x >= 0 ? res : 1.0 / res;
}

double fraction(double a, double x) {
  if (a <= 0) {
    return NAN;
  }
  return exp(x * log(a));
}

void degree(double a, double x, double *real, double *imag) {
  *real = 0;
  *imag = 0;
    
  if (a == 0) {
    if (x < 0) {
      printf("Error raising 0 to a negative power\n");
      *real = NAN;
     }
     return;
  }
    
  if (a < 0) {
    int int_part = (int)x;
    double frac = x - int_part;
        
    if (frac == 0) {
      *real = integ(a, int_part);
      return;
    }
        
    double c = fraction(-a, x);
    *real = c * cos(PI * x);
    *imag = c * sin(PI * x);
    return;
  }
    
    int int_part = (int)x;
    double frac = x - int_part;
    *real = integ(a, int_part) * fraction(a, frac);
}

int main() {
  double a, x, real, imag;
    
  printf("Enter a: ");
  scanf("%lf", &a);
  printf("Enter x: ");
  scanf("%lf", &x);
    
  degree(a, x, &real, &imag);
    
  if (isnan(real)) {
    printf("Undefined result\n");
  } else if (imag == 0) {
      printf("Result: %.15lf\n", real);
    } else {
        printf("Result: %.15lf + %.15lfi\n", real, imag);
  }
    
  return 0;
}

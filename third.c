#include <stdio.h>
#include <math.h>
#include <float.h>

void solve(double a, double b, double c, double d) {
  if (fabs(a) < DBL_EPSILON) {
    printf("This is not a cubic equation.\n");
    return;
  }

    b /= a;
    c /= a;
    d /= a;

    double Q = (b * b - 3 * c) / 9.0;
    double R = (2 * b * b * b - 9 * b * c + 27 * d) / 54.0;

    double discriminant = R * R - Q * Q * Q;

    if (fabs(discriminant) < DBL_EPSILON) {
        discriminant = 0.0;
    }

    if (discriminant > 0) {
      double sqrt_discr = sqrt(discriminant);
      double A = -copysign(1.0, R) * cbrt(fabs(R) + sqrt_discr);
      double B = (fabs(A) < DBL_EPSILON) ? 0.0 : Q / A;

      double x_real = (A + B) - b / 3.0;
      double real_part = -(A + B) / 2.0 - b / 3.0;
      double imag_part = sqrt(3) * fabs(A - B) / 2.0;

      printf("One real root and two complex conjugate: \n");
      printf("x1 = %.15g\n", x_real);
      printf("x2 = %.15g + %.15gi\n", real_part, imag_part);
      printf("x3 = %.15g - %.15gi\n", real_part, imag_part);
    } else if (discriminant == 0) {
        double A = -cbrt(R);
        double x1 = 2 * A - b / 3.0;
        double x2 = -A - b / 3.0;

        printf("All roots are valid:\n");
        printf("x1 = %.15g\n", x1);
        printf("x2 = %.15g\n", x2);
        printf("x3 = %.15g\n", x2);
      } else {
          double theta = acos(R / sqrt(Q * Q * Q));
          double sqrt_Q = sqrt(Q);

          double x1 = -2 * sqrt_Q * cos(theta / 3.0) - b / 3.0;
          double x2 = -2 * sqrt_Q * cos((theta + 2 * M_PI) / 3.0) - b / 3.0;
          double x3 = -2 * sqrt_Q * cos((theta - 2 * M_PI) / 3.0) - b / 3.0;

          printf("x1 = %.15g\n", x1);
          printf("x2 = %.15g\n", x2);
          printf("x3 = %.15g\n", x3);
        }
}

int main() {
  double a, b, c, d;

  printf("Enter first coefficient: ");
  if (scanf("%lf", &a) != 1) {
    printf("Error entering the coefficient.\n");
    return 1;
  }
  printf("Enter second coefficient: ");
  if (scanf("%lf", &b) != 1) {
    printf("Error entering the coefficient.\n");
    return 1;
  }
  printf("Enter third coefficient: ");
  if (scanf("%lf", &c) != 1) {
    printf("Error entering the coefficient.\n");
    return 1;
  }
  printf("Enter fourth coefficient: ");
  if (scanf("%lf", &d) != 1) {
    printf("Error entering the coefficient.\n");
    return 1;
  }

  solve(a, b, c, d);

  return 0;
}

#include <stdlib.h>
#include <math.h>
#include <stdio.h>


void sorti(double *a, double *b) {

  if (*a > *b) {
    double tmp = *a;
    *a = *b;
    *b = tmp;
  }
}


void sortir(double *a, double *b, double *c) {
  if (*a > *b) sorti(a, b);
  if (*a > *c) sorti(a, c);
  if (*b > *c) sorti(b, c);
}


int main() {
   
  double side1, side2, length_brick;
  double length_hole, width_hole;

  printf("Enter first side of the brick: ", side1);
  scanf("%lf", &side1);
  printf("Enter second side of the brick: ", side2);
  scanf("%lf", &side2);
  printf("Enter length brick of the brick: ", length_brick);
  scanf("%lf", &length_brick);

  printf("Enter the length of the hole: ", length_hole);
  scanf("%lf", &length_hole);
  printf("Enter the width of the hole: ", width_hole);
  scanf("%lf", &width_hole);


  sorti(&length_hole, &width_hole);

  sortir(&side1, &side2, &length_brick);

  if (side1 <= length_hole && side2 <= width_hole) {
    printf("The brick goes through the hole\n");
  } else {
      printf("The brick does not fit into the hole\n");
    }
  
  return 0;

}

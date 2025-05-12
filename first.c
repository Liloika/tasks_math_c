#include<stdio.h>
#include<math.h>

int main () {

  int a, b, c;
  
  printf("Enter first side: ");
  scanf("%d", &a);
  
  printf("Enter second side: ");
  scanf("%d", &b);  
  
  printf("Enter third side: ");
  scanf("%d", &c);


  if (a + b > c && a + c > b && b + c > a) {
    double s = (a + b + c) / 2.0;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of the triangle: %lf\n", area);
  } else {
      printf("Triangle with these sides does not exist.\n");
    }

  return 0;
}

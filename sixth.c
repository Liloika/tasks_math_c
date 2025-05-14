#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main() {
  long a;
  
  printf("Enter a: ");
  scanf("%d", &a);
    
  long long b = a * a; 
  b = b * b;

  long long c = a * a;
  long long d = c * c;
  c = c * d;

  long long e = a * a; 
  long long f = e * a;
  long long g = f * f;
  long long h = g * g;
  e = f * h;

  printf("A to the 4th degree: %lld\n", b);
  printf("A to the 6th degree: %lld\n", c);
  printf("A to the 15th degree: %lld\n", e);

  return 0;
}

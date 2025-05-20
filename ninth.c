#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
  
  int n, last;
  int max = INT_MIN;
  int min = INT_MAX;

  printf("Enter a two-digit natural number: ");
  scanf("%d", &n);

  if(n < 0) {
    n = -n;
  }

  if(n == 0) {
    min = 0;
    max = 0;
  } else {
      while(n != 0) {
	last = n%10;
        if(last < min) min = last;
	if(last > max) max = last;
	n = n/10;
      }
  }

  printf("Maximum number: %d\nMinimum number: %d\n", max, min);

  return 0;
}

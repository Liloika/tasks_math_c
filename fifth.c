#include <stdlib.h>
#include <math.h>
#include <stdio.h>

#define USE_XOR 

void xorSwap(int* a, int *b){
  if ( a != b ){
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
  }
}


int main(){
  int a, b;

  printf("Enter first variable (a): ");
  scanf("%d", &a);
  printf("Enter second variable (b): ");
  scanf("%d", &b);  

  xorSwap(&a, &b);

  printf("a = %d, b = %d\n", a, b);
  return 0;    
}

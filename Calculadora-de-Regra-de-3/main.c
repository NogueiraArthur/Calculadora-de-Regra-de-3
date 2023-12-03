//Do inglês proportional rule

#include <stdio.h>

int main(void) {
  float x;
  float y;
  float z;
  float result;

  printf("Welcome to the proporcional rule calculator\n\n");

  printf("X ------> Y");
  printf("\nZ ------> Result");

  printf("\n\nX: ");
  scanf("%f", &x);

  printf("\nY: ");
  scanf("%f", &y);

  printf("\nZ: ");
  scanf("%f", &z);

  result = (z*y)/x;

  printf("\nResult = %.2f", result);

  printf("\n\nX: %.2f ------> Y: %.2f", x, y);
  printf("\nZ: %.2f ------> Result = %.2f", z, result);
  
  
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 40
#define E 0.0001
/* #define f(x) (pow(x, 2) - 6*x + 8) */
#define g(x) ((pow(x, 2) + 8) / 6)

int main() {
  int count = 1;
  float x0, root;
  printf("Enter initial guess value: ");
  scanf("%f", &x0);

  while (count < MAX) {
    count++;
    float x1 = g(x0);
    if (fabs( x1 - x0 ) <= E) {
      root = x1;
      printf("The root of given equation is %f\n", root);
      return 0;
    }
    x0 = x1;
  }

  printf("Value not determine in %d iteration.\n", MAX);
}

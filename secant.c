// secant method
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double *ptr;
int n;

double funct(double x) {
  double fx = 0.0;
  for (int i = 0; i <= n; i++) {
    fx += ptr[i] * pow(x, i);
  }
  return fx;
}

void secant(double x1, double x2, double e) {
  double a = funct(x1), b = funct(x2);
  double x3 = x2 - (b * (x2 - x1)) / (b - a);
  while( fabs((x3 - x2) / x3) > e) {
    x1 = x2;
    x2 = x3;

  }
  printf("The required root of the given equation is: %lf\n", x3);
}

int main() {
  double x1, x2, e;
  printf("Enter the degree of the equation: ");
  scanf("%d", &n);

  ptr = (double *)malloc((n + 1) * sizeof(double));

  for (int i = 0; i <= n; i++) {
    printf("Enter the coefficient of X^%d: ", i);
    scanf("%lf", &ptr[i]);
  }

  printf("Enter the initial guesses x1 and x2: ");
  scanf("%lf%lf", &x1, &x2);
  printf("Enter the stopping criteria (tolerance): ");
  scanf("%lf", &e);

  secant(x1, x2, e);
  free(ptr);
  printf("_______________________________________________\n");
  printf("Programmed by: Pierce Neupane");
}

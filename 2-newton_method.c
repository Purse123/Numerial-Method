#include <math.h>
#include <stdio.h>

#define fx(x) (pow(x, 3) - x - 3);
#define dfx(x) (3 * pow(x, 2) - 1);

void NewtonMethod(double x0, double *e) {
    double a = fx(x0);
    double b = dfx(x0);
    double x1;

    x1 = x0 - (a/b);
    while (fabs((x1 - x0) / x1) >= *e) {
	if (fabs((x1 - x0) / x1) <= *e) {
	    printf("The required root of the given equation is: %.6lf\n", x0);
	    return;
	}
	x0 = x1;
    }

    printf("The required root of the given equation is: %.6lf\n", x0);
}

int main() {
    double xin, e = 0.001;

    printf("Enter any guess values: ");
    scanf("%lf", &xin);
    NewtonMethod(xin, &e);

    printf("___________________________________\n");
    printf("Programmed By : Pierce Neupane\n");

}

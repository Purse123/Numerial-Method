#include <math.h>
#include <stdio.h>

double fx(double x) {
    return pow(x, 3) - x - 3;
}

void bisection_method(double x1, double x2, double e) {
    double a = fx(x1), b = fx(x2);
    double x0, c;

    if ((a * b) > 0) {
        printf("The values %.6lf and %.6lf do not bracket any root.\n", x1, x2);
    } else {
        while (fabs((x2 - x1) / x2) >= e) {
            x0 = (x1 + x2) / 2.0;
            c = fx(x0);

            if (fabs(c) <= e) {
                printf("The required root of the given equation is: %.6lf\n", x0);
                return;
            }

            if ((fx(x0) * fx(x1)) < 0) {
                x2 = x0;
            } else {
                x1 = x0;
            }
        }

        printf("The required root of the given equation is: %.6lf\n", x0);
    }
}

int main() {
    double x1, x2, e = 0.001;

    printf("Enter two guess values: ");
    scanf("%lf %lf", &x1, &x2);

    bisection_method(x1, x2, e);

    printf("___________________________________\n");
    printf("Programmed By : Pierce Neupane\n");

}

#include <stdio.h>

double func(double x, double y);

int main(void)
{
    double x, y;
    for (x = 0; x < 3.0; x += 1.0) {
        for (y = 0; y < 3.0; y += 1.0) {
            printf("%f ", func(x, y));
        }
        printf("\n");
    }
    return 0;
}

// f(x, y) = 1.5*x + 3.0*y
double func(double x, double y)
{
    double value;
    value = 1.5*x + 3.0*y;
    return value;
}

#include <stdio.h>
#include <math.h>
#define PI 3.141592

// 도(degree)를 라디안(radian)으로 변환
double rad(double degree)
{
    return PI * degree / 180.0;
}

int main(void)
{
    double x, y, result;

    x = sin(rad(60.0));
    y = cos(rad(60.0));
    result = x*x + y*y;   // sin^2 + cos^2 = 1
    printf("result=%f \n", result);
    return 0;
}

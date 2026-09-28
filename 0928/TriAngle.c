#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>
#define PI 3.141592

int main() {
	float result;
	int th = 45;
	result = sin(PI * th / 180.0);
	printf("%f", result);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float Square(float n);

int main(void)
{
	float result;
	result = Square(5.2);
	printf("%.2f", result);

	return 0;
}

float Square(float n)
{
	return (n*n);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int x, int y)
{
	int result;

	result = x + y;
	return result;
}

int main() {
	int a, b, sum;
	printf("두개의 정수 입력 :");
	scanf("%d %d", &a, &b);
	sum = add(a, b);
	printf("두 정수의 합은 %d", sum);

	return 0;
}
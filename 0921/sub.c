#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Minus(int a, int b)
{
	return (a-b);
}

int main()
{
	int x, y, sub;
	printf("두 개의 정수를 입력하시오 : ");
	scanf("%d %d", &x, &y);
	sub = Minus(x, y);
	printf("두 정수의 차는 %d", sub);
	return 0;
	
}
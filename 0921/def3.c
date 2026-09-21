#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Add(int x, int y); //함수 원형
int Sub(int a, int b);
int Big(int a, int b);

int main()
{
	int a, b, sum, sub, max;
	printf("두개의 정수 입력 :");
	scanf("%d %d", &a, &b);

	sum = Add(a, b);
	sub = Sub(a, b);
	max = Big(a, b);

	printf("두 정수의 합은 %d", sum);
	printf("두 정수의 차는 %d", sub);
	printf("두 정수 중 가장 큰 값은 %d", max);
	return 0;
}

int Add(int x, int y)
{

	return x + y;
}

int Sub(int a, int b)
{
	return (a - b);
}

int Big(int a, int b)
{
	return(a>b)?a:b;
	
}
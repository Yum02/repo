#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_larger(int, int);

int main()
{
	int a, b, max;
	printf("두 정수를 입력 : ");
	scanf("%d %d", &a, &b);
	max = get_larger(a, b);

	printf("두 수 중에서 가장 큰 수는 %d", max);
	return 0;

}

int get_larger(int x, int y)
{
	return(x > y) ? x : y;
}
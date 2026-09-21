#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int compute_sum(int, int);

int main()
{
	int a, b, compute;
	printf("정수의 범위를 입력 : ");
	scanf("%d %d", &a, &b);

	compute = compute_sum(a, b);
	printf("값의 합은 %d", compute);
	return 0;
}

int compute_sum(int x, int y)
{
	int result = 0;
	for (int i = x; i < y; i++)
	{
		result = result + i;
	}
	return result;

}
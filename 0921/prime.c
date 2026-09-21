#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int);
int get_integer(void);

int main()
{
	int n, result;
	n = get_integer();
	result = is_prime(n);

	if (result == 1)
		printf("%d은 소수입니다. \n", n);
	else
		printf("%d은 소수가 아닙니다.", n);


	return 0;
}

int get_integer()
{
	int x;
	printf("정수를 입력하시오 : ");
	scanf("%d", &x);

	return x;
}

int is_prime(int a)
{
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)                // n이 i로 나누어떨어지면(나머지 0)
			return 0;
	}

	return 1;
}
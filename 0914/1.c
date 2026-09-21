#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(int x)
{
	int i;
	for(i=0; i < x; i++) {
		printf("-------------\n");
	}
}

int main() {
	int i, n1, n2;
	printf("몇줄씩 찍을까요?");
	scanf("%d %d", &n1, &n2);
	Print(n1);

	for(i=0; i < 5; i++) {
		printf("%d의 제곱은 %d\n", i, i*i);
	}

	Print(n2);
	return 0;
}
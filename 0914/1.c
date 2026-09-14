#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print()
{
	printf("----------\n");
	printf("----------\n");
}

int main() {
	int i;

	Print();

	for(i=0; i < 5; i++) {
		printf("%dÀÇ Á¦°öÀº %d\n", i, i*i);
	}

	Print();
	return 0;
}
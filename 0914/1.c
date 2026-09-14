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
	int i;

	Print(2);

	for(i=0; i < 5; i++) {
		printf("%dÀÇ Á¦°öÀº %d\n", i, i*i);
	}

	Print(4);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
	int i, coin_0=0, coin_1=0;
	srand(time(NULL));

	for (i = 0; i < 100; i++) {
		if(rand() % 2 == 0) {
			coin_0++;
		}
		else {
			coin_1++;
		}
	}
	printf("¾Õ¸é: %d\n", coin_0);
	printf("µÞ¸é: %d\n", coin_1);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define MAX 45

int main() {
	int i, j;
	srand(time(NULL));
	for (i = 0; i < 5; i++) {
		printf("%d일차 : ", i + 1);
		for (j = 0; j < 6; j++)
			printf("%d ", rand() % MAX + 1); //MAX 모듈러 없이 printf("%d", (rand()%45)+1); 로도 가능
		printf("\n");
	}
	return 0;
}
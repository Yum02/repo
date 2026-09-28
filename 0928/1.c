#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define MAX 45

int main() {
	int i;
	srand(time(NULL));

	for(i=0;i<6;i++)
		printf("%d\n", rand() % MAX + 1); //MAX 모듈러 없이 printf("%d", (rand()%45)+1); 로도 가능
	
	return 0;
}
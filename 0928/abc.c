#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void Abc();
int i;


int main() {
	printf("메인 : \n", i);
	Abc();
	printf("메인 : \n", i);
	return 0;
}

void Abc() {
	i++;
	printf("아무말 : %d\n", i);
}
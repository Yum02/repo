#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define _CRT_SECURE_NO_WARNINGS
int Coin();

int main() {
	int i, x, coin_0=0, coin_1=0;
	srand(time(NULL));


}

int Coin() {
    int i = rand() % 2;
    if (i == 0)
        return 0;   // µÞ¸é
    else
        return 1;   // ¾Õ¸é
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void sub();

int main()
{
	int i;
	for(i=0; i < 10; i++)
	{
		sub();
	}
	return 0;
}


void sub()
{
	int auto_count = 0;
	static int static_count = 0;

	auto_count++;
	static_count++; 
	printf("auto_count: %d, static_count: %d\n", auto_count, static_count);
}
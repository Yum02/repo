#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define sucess 1
#define fail 2
#define limit 3

int check(int id, int password);

int main()
{
	int id, password, result;
	
	while (1)
	{
		printf("id : ____\b\b\b\b");
		scanf("%d", &id);
		printf("password : ____\b\b\b\b");
		scanf("%d", &password);
		result = check(id, password);
		if (result == sucess)
			break;
	}
	printf("로그인 성공");
	return 0;
	
}

int check(int id, int password)
{
	static int super_id = 1234;
	static int super_password = 5678;
	static int count = 0;

	count++;

	if (count > limit)
	{
		printf("로그인 시도 횟수 초과\n");
		return fail;
		exit(1);
	}
	if (id == super_id && password == super_password)
		return sucess;
	else
		return fail;
}
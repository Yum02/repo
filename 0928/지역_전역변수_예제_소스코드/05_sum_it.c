#include <stdio.h>

void sum_it(int money);

int main(void)
{
    int i;
    for (i = 0; i < 5; i++)
        sum_it(i);
    return 0;
}

void sum_it(int money)
{
    static int sum = 0;    // 한 번만 초기화되고 호출 사이에 값이 유지됨
    sum += money;
    printf("현재의 합계는 %d입니다 \n", sum);
}

#include <stdio.h>

int counter;          // 전역 변수: 자동으로 0으로 초기화

void sub1()
{
    counter++;
}

void sub2()
{
    counter++;
}

int main(void)
{
    sub1();
    sub2();
    printf("counter=%d\n", counter);
    return 0;
}

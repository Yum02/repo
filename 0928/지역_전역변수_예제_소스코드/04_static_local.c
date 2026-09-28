#include <stdio.h>

void sub(void);

int main(void)
{
    sub();
    sub();
    sub();
    return 0;
}

void sub(void)
{
    int auto_count = 0;             // 자동 지역 변수: 호출마다 새로 만들어짐
    static int static_count = 0;    // 정적 지역 변수: 값이 유지됨

    auto_count++;
    static_count++;
    printf("auto_count=%d\n", auto_count);
    printf("static_count=%d\n", static_count);
}

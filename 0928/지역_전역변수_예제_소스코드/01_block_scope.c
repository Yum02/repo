#include <stdio.h>

const double tax_rate = 0.05;    // 전역 상수

int main(void)
{
    int income = 100;

    if (tax_rate > 0)
    {
        int tax;                 // 이 블록 안에서만 유효한 지역 변수
        tax = income * tax_rate;
        income -= tax;
    }
    printf("실제 소득=%d \n", income);
    return 0;
}

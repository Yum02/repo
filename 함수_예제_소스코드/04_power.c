/*
 * 예제 4: 거듭제곱을 구하는 함수
 * power(x, y) : x의 y승을 계산해서 반환하는 함수
 */
#include <stdio.h>

int power(int x, int y);         // 함수 원형: x의 y승을 계산하는 함수임을 선언

int main(void)
{
    int a, b, result;              // a: 밑, b: 지수, result: 계산 결과 저장용

    printf("두 개의 정수를 입력하시오: ");
    scanf("%d %d", &a, &b);         // 입력한 두 정수를 a, b에 저장 (&: 변수의 주소 전달)

    result = power(a, b);           // power 호출: a, b를 인수로 전달
    printf("%d의 %d승은 %d입니다. \n", a, b, result);

    return 0;
}

int power(int x, int y)          // 매개변수 x: 밑, y: 지수
{
    int i;                          // 지역변수 i: for문 반복 횟수를 세는 카운터
    int value = 1;                  // 곱셈 누적 변수. 곱셈이므로 1로 초기화

    for (i = 0; i < y; i++)          // y번(지수만큼) 반복
        value *= x;                   // value = value * x, x를 반복해서 곱함

    return value;                    // 최종 거듭제곱 결과 반환
}

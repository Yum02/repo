/*
 * 예제 3: 함수 원형(prototype)의 사용
 * square(n) : 정수 n의 제곱을 계산해서 반환하는 함수
 */
#include <stdio.h>

int square(int n);               // 함수 원형: main보다 아래에 정의되어 있어 미리 알림

int main(void)
{
    int result;                   // 지역변수 result: square의 반환값을 저장

    result = square(5);            // square 호출: 인수 5 -> 매개변수 n에 5 전달
    printf("%d ", result);         // result(25) 출력
}

int square(int n)                // 매개변수 n: 제곱할 대상 정수
{
    return (n * n);                // n을 자기 자신과 곱한 값(제곱)을 반환
}

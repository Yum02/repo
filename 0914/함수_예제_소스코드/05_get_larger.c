/*
 * 예제 5(핵심예제): 두 수 중에서 큰 수를 찾는 함수
 * get_larger(x, y) : 두 정수 중 더 큰 값을 반환하는 함수
 */
#include <stdio.h>

int get_larger(int x, int y);    // 함수 원형: 두 정수 중 큰 값을 반환

int main(void)
{
    int a, b;                      // a, b: 사용자가 입력한 두 정수

    printf("두개의 정수를 입력하시오: ");
    scanf("%d %d", &a, &b);

    // get_larger(a, b)를 별도 변수에 저장하지 않고 printf 안에서 바로 호출/사용
    printf("두수 중에서 큰 수는 %d입니다.\n", get_larger(a, b));

    return 0;
}

int get_larger(int x, int y)     // 매개변수 x, y: 비교할 두 정수
{
    if (x > y) return (x);         // x가 y보다 크면 x를 반환하고 함수 종료
    else       return (y);         // 그렇지 않으면 y를 반환
}

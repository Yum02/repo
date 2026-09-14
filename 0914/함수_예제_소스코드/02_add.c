/*
 * 예제 2: 매개변수, 인수, 반환값
 * add(x, y) : 두 정수를 더해서 반환하는 함수
 */
#include <stdio.h>

int add(int x, int y)            // 매개변수 x, y: 호출할 때 전달받는 두 정수
{
    int result;                   // 지역변수 result: x+y의 계산 결과를 임시 저장

    result = x + y;                // x와 y를 더해 result에 저장
    return result;                 // result 값을 호출한 곳(main)으로 반환
}

int main(void)
{
    int sum;                       // 지역변수 sum: add 함수가 반환한 값을 저장

    sum = add(2, 3);                // add 호출: 인수 2, 3 -> x=2, y=3 -> 5 반환
    printf("덧셈 결과=%d \n", sum);

    sum = add(6, 8);                // add 재호출: 인수 6, 8 -> 14 반환, sum 갱신
    printf("덧셈 결과=%d \n", sum);

    return 0;
}

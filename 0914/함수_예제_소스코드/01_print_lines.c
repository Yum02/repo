/*
 * 예제 1: 함수의 필요성 - 반복되는 코드를 함수로 분리
 * print_lines() : 구분선 두 줄을 출력하는 함수 (반환값 없음, 매개변수 없음)
 */
#include <stdio.h>

void print_lines()               // void: 반환값이 없는 함수. print_lines: 함수 이름
{
    printf("--------------------- \n");
    printf("--------------------- \n");
}

int main(void)
{
    int i;                       // 지역변수 i: for문에서 0~4까지 증가하는 카운터

    print_lines();                // 함수 호출 1: 구분선 출력

    for (i = 0; i < 5; i++)       // i를 0부터 4까지 1씩 증가시키며 5회 반복
        printf("%d의 제곱은 %d \n", i, i*i);  // i와 i의 제곱(i*i)을 출력

    print_lines();                // 함수 호출 2: 구분선 출력

    return 0;                     // main 함수 정상 종료
}

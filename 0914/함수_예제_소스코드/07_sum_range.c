/*
 * 예제 7(실습 문제 풀이): 초기값과 끝값까지 더하기
 * sum_range(start, end) : start부터 end까지의 합을 반환하는 함수
 * (원본 PDF에는 문제 설명만 있고 정답 코드는 없어서, 직접 작성한 풀이 예시)
 *
 * 예: 0과 10을 입력 -> 55
 *     9와 10을 입력 -> 19
 */
#include <stdio.h>

int sum_range(int start, int end);   // 함수 원형: 시작값과 끝값을 받아 합계를 반환

int main(void)
{
    int start, end, total;             // start: 초기값, end: 끝값, total: 합계 결과

    printf("초기값과 끝값을 입력하시오: ");
    scanf("%d %d", &start, &end);       // 입력받은 두 정수를 start, end에 저장

    total = sum_range(start, end);      // sum_range 호출하여 합계 계산
    printf("%d부터 %d까지의 합은 %d입니다.\n", start, end, total);

    return 0;
}

int sum_range(int start, int end)   // 매개변수 start: 합산 시작값, end: 합산 끝값
{
    int i;                             // 반복문 카운터(지역변수)
    int total = 0;                     // 합계를 누적할 변수. 덧셈이므로 0으로 초기화

    for (i = start; i <= end; i++)      // i를 start부터 end까지 1씩 증가시키며 반복
        total += i;                      // total = total + i, i를 total에 누적

    return total;                       // 최종 합계를 반환
}

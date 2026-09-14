/*
 * 예제 6(실습): 소수(prime) 판별
 * is_prime(n)     : n이 소수이면 1, 아니면 0을 반환
 * get_integer(void): 사용자로부터 정수를 입력받아 반환
 */
#include <stdio.h>

int is_prime(int);               // 함수 원형: 정수 -> 소수여부(1/0)
int get_integer(void);           // 함수 원형: 매개변수 없이 입력값을 반환

int main(void)
{
    int n, result;                 // n: 판별할 정수, result: is_prime의 반환값(1 또는 0)

    n = get_integer();              // get_integer 호출 -> 사용자 입력값을 n에 저장
    result = is_prime(n);           // n을 인수로 is_prime 호출 -> 소수 여부를 result에 저장

    if (result == 1)
        printf("%d은 소수입니다.\n", n);
    else
        printf("%d은 소수가 아닙니다.\n", n);

    return 0;
}

int get_integer(void)
{
    int n;                          // 이 함수만의 지역변수. main의 n과 이름은 같지만 별개 변수

    printf("정수를 입력하시오: ");
    scanf("%d", &n);                 // 입력받은 정수를 n에 저장
    return n;                        // 입력받은 정수를 호출한 곳(main)으로 반환
}

int is_prime(int n)               // 매개변수 n: 소수인지 판별할 대상 정수
{
    int i;                          // 2부터 n-1까지 나누어볼 값을 저장하는 지역변수

    for (i = 2; i < n; i++)          // i를 2부터 n-1까지 증가시키며 반복
    {
        if (n % i == 0)                // n이 i로 나누어떨어지면(나머지 0)
            return 0;                   // 1과 자기 자신 외의 약수가 있으므로 소수가 아님
    }
    return 1;                        // 끝까지 나누어떨어지는 경우가 없었으면 소수
}

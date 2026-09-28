#include <stdio.h>

int is_multiple(int n, int m);

int main(void)
{
    int n, m;

    printf("첫 번째 정수를 입력하시오: ");
    scanf("%d", &n);
    printf("두 번째 정수를 입력하시오: ");
    scanf("%d", &m);

    if (is_multiple(n, m))
        printf("%d은(는) %d의 배수입니다.\n", n, m);
    else
        printf("%d은(는) %d의 배수가 아닙니다.\n", n, m);
    return 0;
}

// n이 m의 배수이면 1, 아니면 0 반환
int is_multiple(int n, int m)
{
    if (n % m == 0)
        return 1;
    return 0;
}

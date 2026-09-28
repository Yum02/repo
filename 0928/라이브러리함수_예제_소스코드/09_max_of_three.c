#include <stdio.h>

int get_integer(void);
int get_larger(int x, int y, int z);

int main(void)
{
    int a, b, c;

    printf("세 개의 정수를 입력하시오: ");
    a = get_integer();
    b = get_integer();
    c = get_integer();
    printf("가장 큰 수는 %d입니다.\n", get_larger(a, b, c));
    return 0;
}

int get_integer(void)
{
    int n;
    scanf("%d", &n);
    return n;
}

int get_larger(int x, int y, int z)
{
    int max = x;
    if (y > max) max = y;
    if (z > max) max = z;
    return max;
}

#include <stdio.h>
#include <stdlib.h>

// 1~45 범위로 제한. 시드를 설정하지 않아 실행할 때마다 같은 값이 나온다.
int main(void)
{
    int i;
    for (i = 0; i < 6; i++)
        printf("%d ", 1 + (rand() % 45));
    printf("\n");
    return 0;
}

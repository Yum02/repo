#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MAX 45

// 로또 번호 생성: 현재 시각을 시드로 사용 (중복 검사는 하지 않음)
int main(void)
{
    int i;
    srand((unsigned)time(NULL));
    for (i = 0; i < 6; i++)
        printf("%d ", 1 + rand() % MAX);
    printf("\n");
    return 0;
}

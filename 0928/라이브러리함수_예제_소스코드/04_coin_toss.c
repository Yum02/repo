#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin_toss(void);   // 사용자 함수 원형

int main(void)
{
    int toss;
    int heads = 0;   // 앞면
    int tails = 0;   // 뒷면

    srand((unsigned)time(NULL));
    for (toss = 0; toss < 100; toss++) {
        if (coin_toss() == 1)
            heads++;
        else
            tails++;
    }
    printf("동전의 앞면: %d \n", heads);
    printf("동전의 뒷면: %d \n", tails);
    return 0;
}

int coin_toss(void)
{
    int i = rand() % 2;
    if (i == 0)
        return 0;   // 뒷면
    else
        return 1;   // 앞면
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for (i = 0; i < 6; i++)
        printf("%d ", rand());   // rand() - 난수 생성기 (0 ~ RAND_MAX)
    printf("\n");
    return 0;
}

// 보충 예제: 같은 이름의 전역 변수와 지역 변수
#include <stdio.h>

int value = 100;      // 전역 변수

void show(void)
{
    printf("show()의 value = %d\n", value);       // 전역 변수 사용
}

int main(void)
{
    int value = 1;    // 지역 변수가 전역 변수를 가린다
    printf("main()의 value = %d\n", value);       // 1

    {
        int value = 2;                            // 안쪽 블록의 변수가 또 가린다
        printf("블록 안의 value = %d\n", value);  // 2
    }
    printf("블록 밖의 value = %d\n", value);      // 1

    show();                                       // 100
    return 0;
}

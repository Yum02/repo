// 초기화하지 않은 지역 변수는 쓰레기 값을 가진다.
// Visual Studio에서 "초기화되지 않은 지역 변수 사용" 오류(C4700)가 나면
// 프로젝트 속성 > C/C++ > SDL 검사를 '아니요'로 바꾸어 실행한다.
#include <stdio.h>

int main(void)
{
    int temp;
    printf("temp = %d\n", temp);
    return 0;
}

// Windows 전용 (GDI). 콘솔 창에 무작위 색 점을 찍는다.
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

HWND hwnd;   // 윈도우 창의 핸들(번호)
HDC hdc;     // 출력에 필요한 정보(폰트, 색상 등)를 담는 구조체

int main(void)
{
    int i, x, y, red, green, blue;

    hwnd = GetForegroundWindow();
    hdc = GetWindowDC(hwnd);
    srand((unsigned)time(NULL));

    for (i = 0; i < 10000; i++) {
        x = rand() % 300;       // 0 ~ 299
        y = rand() % 300;       // 0 ~ 299
        red = rand() % 256;     // 0 ~ 255
        green = rand() % 256;
        blue = rand() % 256;
        SetPixel(hdc, x, y, RGB(red, green, blue));
    }
    return 0;
}

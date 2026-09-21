# 0921 폴더 정리

`0921` 폴더에 있는 모든 C 예제 파일(`add.c`, `sub.c`, `def3.c`, `4.c`, `prima.c`)을 정리한 문서입니다. 각 파일은 사칙연산(덧셈/뺄셈/큰 수 찾기)이나 소수 판별을 함수로 분리해서 구현하는 연습 코드입니다.

> 공통 참고: 모든 소스 파일의 한글 문자열이 EUC-KR/CP949로 저장되어 있어 UTF-8 도구(에디터 등)에서 열면 `�ΰ��� ���� �Է� :`처럼 깨져 보입니다. 코드 오류가 아니라 **인코딩 문제**이며, Visual Studio 등 원래 인코딩으로 열면 정상적으로 표시됩니다.

---

## 1. add.c — 두 수의 합

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int x, int y)
{
	int result;

	result = x + y;
	return result;
}

int main() {
	int a, b, sum;
	printf("두개의 숫자 입력 :");
	scanf("%d %d", &a, &b);
	sum = add(a, b);
	printf("두 숫자의 합은 %d", sum);

	return 0;
}
```

### 설명
- `add(int x, int y)` : 매개변수 `x`, `y`를 더해 지역 변수 `result`에 저장한 뒤 반환하는 함수. 덧셈 로직을 `main`과 분리해 재사용/유지보수를 쉽게 함.
- `main`에서 `scanf("%d %d", &a, &b)`로 두 정수를 입력받음. `&`는 변수의 메모리 주소를 넘겨 `scanf`가 그 위치에 직접 값을 써넣게 하기 위함.
- `sum = add(a, b);` : 함수 호출 결과를 `sum`에 저장 후 출력.

### 실행 예시
```
두개의 숫자 입력 :3 5
두 숫자의 합은 8
```

### 상태
문법/로직 오류 없음. 정상 동작.

---

## 2. sub.c — 두 수의 차

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Minus(int a, int b)
{
	return (a-b);
}

int main()
{
	int x, y, sub;
	printf("두 수를 순서대로 입력하시오 : ");
	scanf("%d %d", &x, &y);
	sub = Minus(x, y);
	printf("두 수의 차는 %d", sub);
	return 0;
	
}
```

### 설명
- `Minus(int a, int b)` : `a - b`를 계산해 반환. `main`보다 먼저 정의되어 있어 별도의 함수 프로토타입 선언이 없어도 됨.
- `main`에서 두 정수 `x`, `y`를 입력받아 `Minus(x, y)` 호출 결과를 `sub`에 저장 후 출력.
- 뺀 순서(`x - y`)이므로 입력 순서에 따라 결과 부호가 달라짐 (예: `10 3` 입력 시 `10 - 3 = 7`, `3 10` 입력 시 `3 - 10 = -7`).

### 실행 예시
```
두 수를 순서대로 입력하시오 : 10 3
두 수의 차는 7
```

### 상태
문법/로직 오류 없음. 정상 동작.

---

## 3. def3.c — 합/차/최댓값

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Add(int x, int y); //함수 선언
int Sub(int a, int b);
int Big(int a, int b);

int main()
{
	int a, b, sum, sub, max;
	printf("두개의 숫자 입력 :");
	scanf("%d %d", &a, &b);

	sum = Add(a, b);
	sub = Sub(a, b);
	max = Big(a, b);

	printf("두 수의 합은 %d", sum);
	printf("두 수의 차는 %d", sub);
	printf("두 수중 더 큰 수는 %d", max);
	return 0;
}

int Add(int x, int y)
{

	return x + y;
}

int Sub(int a, int b)
{
	return (a - b);
}

int Big(int a, int b)
{
	return(a>b)?a:b;
	
}
```

### 설명
- 상단에 `Add`, `Sub`, `Big` 세 함수를 **선언(프로토타입)** 해 두고, `main` 아래에서 실제 **정의**함. 함수를 호출부보다 나중에 정의할 때는 이렇게 미리 선언해 컴파일러에게 함수의 존재를 알려야 함.
- `Add(a, b)` : 덧셈, `Sub(a, b)` : 뺄셈, `Big(a, b)` : 삼항 연산자(`?:`)로 둘 중 더 큰 값을 반환.
- `main`에서 세 함수를 순서대로 호출해 `sum`, `sub`, `max`에 저장 후 각각 출력.

### 이전 버전에서 있었던 문제 (참고용, 현재는 수정됨)
과거 버전(`3.c`)에서는 프로토타입 선언(`Add`, `Sub`)과 실제 정의 함수 이름(`add`, `Minus`)이 대소문자/철자까지 서로 달라, `Add`와 `Sub`가 정의되지 않은 상태로 호출되어 **링커 오류(undefined reference)**가 발생했습니다. 현재 `def3.c`는 선언과 정의의 이름이 모두 일치하도록 고쳐져 있어 정상적으로 컴파일/실행됩니다.

### 실행 예시
```
두개의 숫자 입력 :3 5
두 수의 합은 8두 수의 차는 -2두 수중 더 큰 수는 5
```
(참고: `printf`에 개행문자 `\n`이 없어 세 결과가 한 줄에 이어서 출력됨)

### 상태
문법/로직 오류 없음. 정상 동작. 다만 출력 가독성을 위해 각 `printf` 끝에 `\n`을 추가하면 더 좋음.

---

## 4. 4.c — 빈 파일

현재 내용이 비어 있는 파일입니다. 다음 예제(아마도 곱셈/나눗셈 등 추가 연산)를 작성할 자리로 보입니다.

---

## 5. prima.c — 소수 판별 (미완성, 버그 있음)

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int);
int ger_integer(void);

int main()
{
	int n, result;
	n = ger_integer();
	result = is_prime(n);

	if (result == 1)
		printf("%d는 소수입니다. \n", n);
	else
		printf("%d는 소수가 아닙니다.", n);


	return 0;
}

int get_integer()
{
	int x;
	printf("정수를 입력하시오 : ");
	scanf("%d", &x);

	return 0;
}

int is_prime(int a)
{
	

	return a;
}
```

### 설명
사용자에게 정수를 입력받아 소수인지 판별하려는 의도의 코드지만, 아직 미완성이며 아래와 같은 문제가 있습니다.

### 문제점

1. **함수 이름 불일치 (링커 오류)**
   - 선언(`int ger_integer(void);`)과 호출(`n = ger_integer();`)은 `ger_integer`
   - 실제 정의는 `get_integer` (철자가 다름)
   - C는 대소문자·철자가 하나라도 다르면 완전히 다른 함수로 취급하므로, `ger_integer`가 정의되지 않은 채 호출되어 **undefined reference 링커 오류**가 발생함
   - 고치는 법: 선언·호출·정의 세 곳의 이름을 전부 동일하게 통일 (`get_integer`로 통일하는 것을 권장)

2. **입력값을 반환하지 않음**
   - `get_integer` 내부에서 `scanf`로 읽은 값은 지역 변수 `x`에 저장되지만, 마지막 줄이 `return 0;`이라 항상 상수 `0`을 반환함
   - 결과적으로 사용자가 무엇을 입력하든 `n`은 항상 `0`이 됨
   - 고치는 법: `return 0;`을 `return x;`로 변경해 실제 입력값을 돌려주도록 함

3. **`is_prime`에 소수 판별 로직이 없음**
   - `is_prime(int a)`는 판별 로직 없이 매개변수 `a`를 그대로 반환함
   - `main`은 반환값이 `1`인지로 소수 여부를 판단하는데, 이 함수는 그런 의미 있는 `0`/`1` 값을 만들어내지 않음
   - 고치는 법 (힌트): `for`문으로 `2`부터 `a/2`까지 반복하며 `a % i == 0`(나누어떨어짐)인 경우가 있으면 그 즉시 `return 0;`(소수 아님), 반복문을 끝까지 돌았는데 한 번도 나누어떨어지지 않았다면 반복문이 끝난 뒤 `return 1;`(소수) 하도록 구현

### 상태
**미완성 / 버그 있음.** 위 3가지를 모두 고쳐야 정상적으로 컴파일되고 소수 판별 기능이 동작함.

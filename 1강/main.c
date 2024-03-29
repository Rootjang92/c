#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// int a -> 정적 변수로 선언된 것을 초기값 0
// 부호 비트 : 음수 = 0 / 양수 = 1 가장 왼쪽 bit -> 적합하지 않아 2의 보수 사용.(1의 보수 + 1) -> 모든 비트 뒤집은 후 + 1
// 2의 보수를 사용하면 덧셈 연산만을 사용하여 양수와 음수를 연산할 수 있다. (올림 수 발생 시, 무시)

// scanf : 취약한 함수로 분류되어 사용이 권장되지 않음.
// & 기호는 : 변수의 주소 연산자 -> 포인터에서 더 자세히. -> 특정 메모리 주소에 접근하여 데이터를 수정하므로 사용한다.

// double형의 경우 입력 받을 때는 &lf를 사용하고 출력할 때는 %f를 사용하는데, 출력할 때는 주소가 아닌 값 자체를 출력하므로 구체적인 크기를 지정하지 않아도 된다.



int main(void) {
	double a;
	scanf("%lf", &a);
	printf("The number is %.2f\n", a);
	system("pause");
	return 0;
}

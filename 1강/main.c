#include <stdio.h>

// int a -> 정적 변수로 선언된 것을 초기값 0
// 부호 비트 : 음수 = 0 / 양수 = 1 가장 왼쪽 bit -> 적합하지 않아 2의 보수 사용.(1의 보수 + 1) -> 모든 비트 뒤집은 후 + 1
// 2의 보수를 사용하면 덧셈 연산만을 사용하여 양수와 음수를 연산할 수 있다. (올림 수 발생 시, 무시)


int main(void) {
	int a = 7;
	printf("The number is %d \n", a);
	system("pause");
	return 0;

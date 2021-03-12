#include <stdio.h>

int main() {
	int a = 63;
	int b = 5;

	printf("%d + %d = %d\n", a, b, a + b);

	printf("%d - %d = %d\n", a, b, a - b);

	printf("%d * %d = %d\n", a, b, a * b);

	printf("%d / %d = %d\n", a, b, a / b);

	printf("%d %% %d = %d\n", a, b, a % b);

	float c = a /(float) b;
	// 이렇게 타입 변환하면 promote되서 자연스럽게 float으로 연산됨
	printf("%d / %d = %f\n", a, b, c);
	// 정수와 정수를 사칙연산하면 무조건 결과 값은 정수로 나온다.
	return 0;
}
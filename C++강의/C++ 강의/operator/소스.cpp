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
	// �̷��� Ÿ�� ��ȯ�ϸ� promote�Ǽ� �ڿ������� float���� �����
	printf("%d / %d = %f\n", a, b, c);
	// ������ ������ ��Ģ�����ϸ� ������ ��� ���� ������ ���´�.
	return 0;
}
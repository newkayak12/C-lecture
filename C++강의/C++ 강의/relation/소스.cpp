#include <stdio.h>

int main() {

	int a = 20;
	int b = 30; 

	a < b; // boolean �̶� ���� ����

	printf("%d\n", a < b); //��� �� 1
	printf("%d\n", a > b); // ��� �� 0

	// �� = 1 ���� = 0�� �����̶�� �Ѵ�.
	// C �� ���ڸ� ������� �۵�
	// 0�̿��� ���ڴ� ������ �޾Ƶ���
	// c���� ������ ����.  ���ڷ� �Ǻ��Ѵ�.
	// 


	int c = 10;
	int d = 30;
	printf("%d < %d = %d\n",a,b, a < b);
	printf("%d < %d = %d\n",a,b, a < b);
	printf("%d <= %d = %d\n", a, b, a <= b);
	printf("%d >= %d = %d\n", a, b, a >= b);
	printf("%d == %d = %d\n", a, b, a == b);
	printf("%d != %d = %d\n", a, b, a != b);

	return 0;

}

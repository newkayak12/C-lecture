#include <stdio.h>	

int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int calculator(int(*pfunc)(int, int), int a, int b) {
	return pfunc(a, b);
}

int main() {


	int(*pfunc[2])(int, int);
	pfunc[0] = add;
	pfunc[1] = sub;

	//int(*func)(int, int);// �Լ� ������
	// �Լ��� �޸𸮿� ����ȴ�.
	//int add��� �Լ��� ����� �� �Լ��� �ڵ尡 �޸𸮿� ����ȴ�.
	//�� �Լ����� add�Լ��� ����� �޸��� �ּ� ���� ���´�.
	/*
	* �޸𸮿� ����Ǿ����� �޸𸮿� ��ġ�� �Լ��� �ּ� ���� �̿��� �� ����
	*/

	//int(*pfunc)(int, int);

	//// ���� int �Ű����� int2 ���� �Լ��� ������ ����. �� ������ ������ �ּҰ��� ������ �� �ִ� ���� ����� ������ �Լ��� �����ϴ�. 
	//pfunc = add;

	//printf("%d", pfunc(20, 30));

	// �̷��Ÿ� �׳� ���°� ���� �ʾ�????????????????????????
	//�Լ� �����͸� ���� �Լ��� �Ű������� ����� �� �ִ�. 

	int inputvalue = 0;
	int a = 20;
	int b = 30;
	printf("������ 1, ������ 2�� �Է��ϼ��� : ");
	scanf_s("%d", &inputvalue);
	printf("%d + %d = %d", a, b, pfunc[inputvalue](a,b));
	//������ ��������. ���� ���� ���鶧 �̷��� ����Ѵ�(��Ŷ....ó��(1���� ���� 2���� ä�� 3���� �����ؼ�
	//���� �����ο�鼭 �����ϸ鼭.������������

	//switch (inputvalue) {
	//case 1:
	//{
	//	printf("%d + %d = %d", a, b, calculator(add, a, b));

	//}
	//break;

	//case 2:
	//{
	//	printf("%d - %d = %d", a, b, calculator(sub, a, b));
	//}
	//break;

	//default :
	//{

	//
	//}
	//break;


	//}
	/*
	* �Լ��� �Ű������� �ִ´�?
	* 
	* 
	* 
	* ���� �����忡�� �ϳ��� �����尡 �۾��� ������ �˷��޶�� �ϴ� ������ callback�ϴ� �Լ��� �Լ� �����ͷ� ����
	*/

	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int* MakeSpace(int size) {
	return (int*)malloc(sizeof(int) * size);
}


// 



void main() {
	// ���������� ���� �߿� �츮���� ���� ������ �������� �Ҵ� �� �� ���

	//void* malloc(int size);

	//(�����̴�. ���� ����)

	/*ss �ڵ� ����
		cs �츮�� ���� �ڵ�
			ps
				heap ���� ����
*/

	//malloc�� heap�� �츮�� ����� �޶�� �ϴ´�� �׳� ������ ������ش�. 100byte�� �״�� �׸��� void�� �����͸� ��ȯ

		// void * �ּ� ���� ���� �������� ���� �ּҰ��̴�.  �ּҰ��� ������ 4byte�̴�. 
	
		
		/*int* pa; �̵�
		double* pac; �̵� pa/pac�� �� �ּ� �� ��ü�� 4byte
		���� �� ������ ����Ǿ� �ִ� �ڷ���� ũ�Ⱑ 4byte/8byte ��� �Ҹ��� ��*/

	/*int* p = (int*)malloc(100);
	
	realloc = �̹� �Ҵ� �� ���� ���Ҵ��Ҷ�(������ �� �ʿ���) ()-> ������ ������ ���ο� ������ �����ϰ� ������ ���� ����� ���ο� ���� �ּ� ���� ����
		realloc(������� ���� �ּ� ��, �߰� �Ҵ� ��);

	calloc = ���� �� 0���� �ʱ�ȭ���ش�(�Ҵ����ִµ�)
*/

	//heap�� ������ ���� �������� ? gc��  ��� �츮�� ���� free(p); �̷��� ��ȯ�ؾ��Ѵ�. 
	// ���� free �����ָ� �޸� ������ �ȴ� (��ǻ�� ����ýñ��� ����..)

	/*int size = 0;
	printf("����� �Է����ּ���. :");
	scanf_s("%d", & size);

	int* p = (int*)malloc(sizeof(int) * size);

	for (int i = 0; i < size; i++) {
		p[i] = i;
	}

	for (int i = 0; i < size; i++) {
		printf("p[%d] = %d\n", i, p[i]);
	}

	free(p);*/

	// �̷��� ���� �߿� ������ �����.......... ���� �߿� ������ ��ŭ ������ �����.
	// c������ malloc�� �ַ� ����Ѵ�.

	//��ü���⿡���� new�� ����ؼ� �����. 
	// Scanner scn = new Scanner(System.in);
	//int s = scn.nextInt();
	// new int [s]; �̶� ���� �����̴�. 

	// free�� �׻� �ؾ��Ѵ�. 
	//malloc�� free�� ¦���̶�� �����ؾ��Ѵ�. 


	//MakeSpace �Լ��� �̿��ؼ� 
	// ���� 1~10���� ���
	int input=0;
	printf("���� �Է����ּ���: ");
	scanf_s("%d", &input);
	int*space = MakeSpace(input);

	for (int i = 0; i < input; i++) {
		space[i] = (i + 1);
	}

	for (int i = 0; i < input; i++) {
		printf("space[%d] ������ ���� %d\n",i, space[i]);
	}
	


	free(space);


	//double* pDouble = (double*)malloc(40);
	//int* pInt = (int*)malloc(40);

	//pDouble++; > 8����Ʈ�� �̵�
	//	pInt++; > 4����Ʈ�� �̵�
}
#include <stdio.h>

void main() {

	//switch �� _ ���� �б�






	/*int buttonNum;*/

	//switch (buttonNum) {

	//case 0:
	//	printf("0�Դϴ�.");
	//	break;
	//
	//case 1:
	//	printf("1�Դϴ�.");
	//	break;
	//
	//case 2: 
	//	printf("2�Դϴ�.");
	//	break;	

	//default :

	//	break;
	//}


	// Tv ����Ʈ ��Ʈ�� ���α׷��� §�ٰ� �����غ���!
	// 0: TV �ѱ�
	// 1: TV ���� 
	// 2: TV ���� 1 ����
	// 3: TV ���� 1 ����
	//���⿡ 3���� �߰��ؼ� �ۼ��غ�����??
	printf("������ \n 1. TV �ѱ� \n 2. TV ���� \n 3.���� ���� \n 4. ���� ���� \n 5. ä�� �ø��� \n 6. ä�� ������ \n 7. ����ä��");
		int y = 0;
	scanf_s("%d", &y);
	switch (y) {
	case 1:
		printf("TV�� �մϴ�.");
			break;
	case 2:
		printf("TV�� ���ϴ�.");
			break;
	case 3:
		printf("TV�� ������ ������ŵ�ϴ�.");
			break;
	case 4:
		printf("TV�� ������ ���ҽ�ŵ�ϴ�.");
			break;
	case 5:
		printf("TV�� ä���� �ø��ϴ�.");
			break;
	case 6:
		printf("TV�� ä���� �����ϴ�.");
			break;
	default : 
		printf("���� ä�η� ���ư��ϴ�. .");
			break;

			
	}
	// switch �ȿ��� ������ ������ �� ������ �׳� { } �ȿ� ���� ����

	//��!!!!!
}
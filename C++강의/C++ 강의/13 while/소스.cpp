#include <stdio.h>

void main() {

	//while�� �ݺ� Ƚ���� �� ��

	//do - while���� ������ �������ص� ��� �� ���� �ڵ尡 ����ȴ�. 
	//��, ��� �� ���� �����ϰ� ���� �����ϰ� �� ���� or �ȵǰų� 
	 //��� ��� �󵵰� ����. 

	//int money = 0;
	// while (money > 0) {
	//	for (int i = 0; i < 100; i++) {
	//		for (int j = 0; j < 100; j++) {
	//			if (money == 1000) {
	//				//break;// break�� ���� ����� for�� Ż����
	//				//continue; //continue; �� ���� ����� for�� ���ư� (���� �ڵ带 �������� �ʰ�
	//				// ���� ���⼭ �ƿ� while���� �� ��ġ�� �����������Ѵٸ�??
	//				// goto�� ����ؼ� �� ���� �������� �� �ְ���??
	//				//�װ� �ƴϸ� �ݺ��� ���� break; break; break;
	//				goto Exit;


	//			}
	//		}
	//	}

	//}

	// Exit:
	// printf("terminated")



	// 0~100���� ���� �� ¦���� ����ϼ���
	// 0~100���� ���� �߿��� 3�� ����̸� ¦���� ���� ���
	// *�� �簢���� �׷�������
	printf("ù ��° ����\n");
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			printf("%d\n", i);
		}
	}
	printf("\n");
	printf("�� ��° ����\n");
	for (int i = 1; i <= 100; i++) {
		if ((i % 3 == 0) && (i % 2 == 0)) {
			printf("%d\n", i);
		}
	}
	printf("\n");
	printf("�� ��° ����\n");
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			printf("* ");

		}
		printf("\n");
	}

	//���� �� 5x5 �簢��

	printf("\n");
	printf("�� ��° ����\n");
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {

			if ((i >= 2 && i <= 4) && !(j == 1 || j == 5)) {
				printf("  ");

			}
			else {
				printf("* ");
			}

		}
		printf("\n");
	}

	//���ﰢ��
	printf("\n");
	printf("�ټ� ��° ����\n");
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {

			printf("*");

			if (i <= j) {
				printf("\n");
				break;
			}

		}

	}


	//�����ﰢ��
	printf("\n");
	printf("���� ��° ����\n");
	for (int i = 1; i <= 5; i++) {
		for (int j = 5; j >= 1; j--) {

			printf("*");

			if (i >= j) {
				printf("\n");
				break;
			}

		}

	}


	// ���ﰢ��
	printf("\n");
	printf("�ϰ� ��° ����\n");
	int o = 1;
	for (int i = 1; i <= 5; i++) {
		for (int j = 5; j >= 1; j--) {
			printf(" ");
			if (i >= j) {

				break;
			}
		}

		for (int k = 1; k <= 9; k++) {

			printf("*");


			if (o <= k) {
				printf("\n");
				o += 2;
				break;
			}
		}

	}
	//// ���� �� ���ﰢ��
	//printf("\n");
	//printf("���� ��° ����\n");
	//int q = 1;
	//
	//for (int i = 1; i <= 5; i++) {
	//	for (int j = 5; j >= 1; j--) {
	//		printf(" ");
	//		if (i >= j) {

	//			break;
	//		}
	//	}

	//	for (int k = 1; k <= 9; k++) {
	//		if (i>=2 && i<=4) {
	//			int m = 2;
	//			for (int w = 2; w <= m; w++) {
	//				if (k == w) {
	//					printf("#");
	//				}
	//				m += 1;
	//			}
	//			
	//		}
	//		else {
	//			printf("*");
	//		}
	//		
	//		
	//		


	//		if (q <= k) {
	//			printf("\n");
	//			q += 2;
	//			break;
	//		}
	//	}

	//}

	


			
		
	
}
#include <stdio.h>

void main() {

	//while은 반복 횟수를 모를 때

	//do - while문은 조건이 불충족해도 적어도 한 번은 코드가 실행된다. 
	//즉, 적어도 한 번은 실행하고 조건 대조하고 더 실행 or 안되거나 
	 //얘는 사용 빈도가 낮다. 

	//int money = 0;
	// while (money > 0) {
	//	for (int i = 0; i < 100; i++) {
	//		for (int j = 0; j < 100; j++) {
	//			if (money == 1000) {
	//				//break;// break는 가장 가까운 for를 탈출함
	//				//continue; //continue; 는 가장 가까운 for로 돌아감 (밑의 코드를 실행하지 않고
	//				// 만약 여기서 아예 while까지 다 제치고 빠져나가야한다면??
	//				// goto를 사용해서 한 번에 빠져나갈 수 있겠지??
	//				//그게 아니면 반복문 마다 break; break; break;
	//				goto Exit;


	//			}
	//		}
	//	}

	//}

	// Exit:
	// printf("terminated")



	// 0~100까지 숫자 중 짝수를 출력하세요
	// 0~100까지 숫자 중에서 3의 배수이면 짝수인 것을 출력
	// *로 사각형을 그려보세요
	printf("첫 번째 문제\n");
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			printf("%d\n", i);
		}
	}
	printf("\n");
	printf("두 번째 문제\n");
	for (int i = 1; i <= 100; i++) {
		if ((i % 3 == 0) && (i % 2 == 0)) {
			printf("%d\n", i);
		}
	}
	printf("\n");
	printf("세 번째 문제\n");
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			printf("* ");

		}
		printf("\n");
	}

	//속이 빈 5x5 사각형

	printf("\n");
	printf("네 번째 문제\n");
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

	//직삼각형
	printf("\n");
	printf("다섯 번째 문제\n");
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {

			printf("*");

			if (i <= j) {
				printf("\n");
				break;
			}

		}

	}


	//역직삼각형
	printf("\n");
	printf("여섯 번째 문제\n");
	for (int i = 1; i <= 5; i++) {
		for (int j = 5; j >= 1; j--) {

			printf("*");

			if (i >= j) {
				printf("\n");
				break;
			}

		}

	}


	// 정삼각형
	printf("\n");
	printf("일곱 번째 문제\n");
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
	//// 속이 빈 정삼각형
	//printf("\n");
	//printf("여덟 번째 문제\n");
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
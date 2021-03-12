#include <stdio.h>

void main() {

	//switch 문 _ 조건 분기






	/*int buttonNum;*/

	//switch (buttonNum) {

	//case 0:
	//	printf("0입니다.");
	//	break;
	//
	//case 1:
	//	printf("1입니다.");
	//	break;
	//
	//case 2: 
	//	printf("2입니다.");
	//	break;	

	//default :

	//	break;
	//}


	// Tv 리모트 컨트롤 프로그램을 짠다고 생각해보자!
	// 0: TV 켜기
	// 1: TV 끄기 
	// 2: TV 볼륨 1 증가
	// 3: TV 볼륨 1 감소
	//여기에 3개를 추가해서 작성해보세요??
	printf("리모컨 \n 1. TV 켜기 \n 2. TV 끄기 \n 3.볼륨 증가 \n 4. 볼륨 감소 \n 5. 채널 올리기 \n 6. 채널 내리기 \n 7. 이전채널");
		int y = 0;
	scanf_s("%d", &y);
	switch (y) {
	case 1:
		printf("TV를 켭니다.");
			break;
	case 2:
		printf("TV를 끕니다.");
			break;
	case 3:
		printf("TV를 볼륨을 증가시킵니다.");
			break;
	case 4:
		printf("TV를 볼륨을 감소시킵니다.");
			break;
	case 5:
		printf("TV를 채널을 올립니다.");
			break;
	case 6:
		printf("TV를 채널을 내립니다.");
			break;
	default : 
		printf("이전 채널로 돌아갑니다. .");
			break;

			
	}
	// switch 안에서 변수를 선언할 것 같으면 그냥 { } 안에 집어 넣자

	//꼭!!!!!
}
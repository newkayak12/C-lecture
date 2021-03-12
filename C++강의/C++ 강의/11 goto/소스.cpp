#include <stdio.h>

void main() {
	//goto문 (이건 자바에 없지!!!!!!)  _ 무조건 분기문

	/*start:*/

	int inputValue = 0;
	scanf_s("%d", &inputValue);

	if (inputValue == 2) {
		goto Exit; /*하양식 분기*/
		//goto start; /*상향식 분기문*/		 // 웬만하면 사용하지 마세요 이러면 코드 분석하기도 힘들고 
											// 여기저기 왔다갔다 해야되서 힘들어 따라가기 특히 상향식 분기문은
											//java에도 있을까???
	}


	printf("123123");
	printf("1bleiaksl123123");

	Exit:




}
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

	//int(*func)(int, int);// 함수 포인터
	// 함수도 메모리에 저장된다.
	//int add라는 함수를 만들면 이 함수의 코드가 메모리에 적재된다.
	//이 함수명은 add함수가 적재된 메모리의 주소 값을 갖는다.
	/*
	* 메모리에 적재되었으니 메모리에 위치한 함수의 주소 값을 이용할 수 있지
	*/

	//int(*pfunc)(int, int);

	//// 리턴 int 매개변수 int2 개인 함수의 포인터 변수. 이 포인터 변수에 주소값을 저장할 수 있는 것은 비슷한 형태의 함수만 가능하다. 
	//pfunc = add;

	//printf("%d", pfunc(20, 30));

	// 이럴거면 그냥 쓰는게 낫지 않아????????????????????????
	//함수 포인터를 쓰면 함수를 매개변수로 사용할 수 있다. 

	int inputvalue = 0;
	int a = 20;
	int b = 30;
	printf("덧셈은 1, 뺄셈은 2를 입력하세요 : ");
	scanf_s("%d", &inputvalue);
	printf("%d + %d = %d", a, b, pfunc[inputvalue](a,b));
	//ㅋㅋㅋ 개지린다. 게임 서버 만들때 이렇게 사용한다(패킷....처리(1번이 무브 2번이 채팅 3번이 어택해서
	//존나 자유로우면서 복잡하면서.ㅋㅋㅋㅋㅋㅋ

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
	* 함수를 매개변수로 넣는다?
	* 
	* 
	* 
	* 다중 스레드에서 하나의 스레드가 작업이 끝나면 알려달라고 하는 식으로 callback하는 함수를 함수 포인터로 전달
	*/

	return 0;
}
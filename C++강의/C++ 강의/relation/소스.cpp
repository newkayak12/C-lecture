#include <stdio.h>

int main() {

	int a = 20;
	int b = 30; 

	a < b; // boolean 이랑 같은 형식

	printf("%d\n", a < b); //결과 값 1
	printf("%d\n", a > b); // 결과 값 0

	// 참 = 1 거짓 = 0은 논리값이라고 한다.
	// C 는 숫자를 기반으로 작동
	// 0이외의 숫자는 참으로 받아들임
	// c언어는 논리형이 없다.  숫자로 판별한다.
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

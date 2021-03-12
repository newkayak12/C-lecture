#include <stdio.h>
#include "floatTest.h" 

	//함수형  > 우리가 작성한 코드를 묶을 때 쓰는 데이터 타입입니다.
	/*int add(int a, int b) {
	리턴 타입 / 함수명 /(매개변수)
		int result = a + b;
		return result;
		
	}*/


	//밖으로 내보낼 때 결과 값이 int라는 것이다.


	//return 할 가치가 없을 경우 void 로 처리하면 된다. (java랑 같죠?)
	/*void add(int a, int b) {
	리턴 타입 / 함수명 /(매개변수) {
			
			내용이 들어간다.
		int result = a + b;
		
		void라면 return문이 없겠죠

	}*/
	//왜 매개변수라는 이름일까? 저 함수를 사용하려면 () 안에 값을 대입해야하는데 매개변수는 이러한 값을 받아서 함수 내부로 갖고 들어온다.
	/*eg) add(20, 30);*/ // 함수를 호출할 때 입력한 값은 '인자(argument)'라고 한다.
						// 함수를 선언할 때 사용한 int a같은 녀석을 매개변수(parameter)라고 한다.

	

//함수의 경우의 수
//int add(int a, int b) {
//	int result = a + b;
//
//	return result;
//
//}
//
//
//void add2() {
//}
//
//	
//
//int add3() {
//
//}
//
//
//void add4(int a, int b) {
//
//
//}

/// ///////////////
// 실수의 덧셈, 뺼셈, 곱셈, 나눗셈 함수를 만들고 10.7, 2.5 두 값을 계산해서 출력하라



void main() {  //main도 함수이다. 물론 조금 특별한 역할을 한다. C언어는 함수 지향적 언어이다. 
									// C언어는 함수로 이루어져 있다. 즉, 함수와 함수의 관계로 작동한다는 뜻이다.
									// C언어로 프로그램을 만들면 각자의 역할을 하는 함수가 있을 것이다. 
									// 여러 함수가 있는데 어디에서부터 시작해야 올바르게 작동하는 것일까?
									//  ㄴ 항상 프로그램은 main()에서부터 시작한다 그래서 main은 진입 함수라고 한다. (java도 그렇죠)		
									// 프로그램을 만들어서 실행을 하면 프로그램이 메모리로 로드가 되며 메모리에 있는 코드가 CPU 와 통신을 하면서 실행되는 것
										// 메모리가 세그먼트 단위로 나뉘게 된다. code seg, data seg, heap, stack seg 이렇게
										// 그 중에서 함수는 코드 세그먼트에 저장된다.
										// 변수는 d/s
										// 동적 변수는 heap에 위치한다.
	//int a = 20;							// 메모리에는 이진수를 저장한다.
	//int b = 30;							// 어디에 있는 이진수는 데이터, 혹은 명령어로 받아들이고 
	//								
	//int result = add(a, b);				// cpu 안에는 레지스터가 존재한다.
	//printf("result = %d", result);		// 그 안에 code seg/ data seg/ stack seg 등의 레지스터가 존재한다.

										// 이 레지스터에 각 메모리의 세그먼트 주소값이 있고 이 주소값을 기반으로  같은 이진수라도 받아들이는
											// 타입이 다르다(명령/데이터/데이터....)



											//  결국 함수는 메모리에 적재되어 있다. 
										// c/s에 각 주소값으로 main/ add 이렇게 탑재되어있는 것이다.

											//int a 로 값을 선언하면 s/c(스택)에 값이 입력된다.(java도)
										// 그러고 add를 호출하면 add 쪽으로 메모리를 건너뛴다. (call add라는 명령이 실행된다. = add라는 함수가 있는 곳으로 실행 방향을 바꾼다.)
											//그러면 add(para,para) 있는 parameter들이 stack에 올라가고 result에 값을 저장하니까 result도 stack 에 올라간다.

											//return을 만나면 지금까지의 스택에 있는 parameter들은 사라지고, 그 함수가 return되면서 temp라는 공간이 스택에 올라가고
											//결과 값이 temp에 저장된다. 
											// 그러면 result 변수에 temp를 대입하고 결과적으로 result에 결과 값이 저장된다.
											//return을 만나면 다시 다음 순서로 넘어간다.



	double firnum = 10.7;
	double secnum = 2.5;

	printf("%.2f + %.2f = %.2f\n",firnum, secnum,add(firnum, secnum));
	printf("%.2f - %.2f = %.2f\n", firnum, secnum, minus(firnum, secnum));
	printf("%.2f * %.2f = %.2f\n", firnum, secnum, mulitple(firnum, secnum));
	printf("%.2f / %.2f = %.2f\n", firnum, secnum, division(firnum, secnum));
	/// 선생님의 피드백 웬만하면 자료형에 맞는 것을 쓰되, 최대한 공간이 남지 않도록 쓰자
	// 최대한 주석을 많이 달자
	// 한 번 시작하면 끝까지 하는 습관을 들이자

	//이번 함수 같은 경우도 최대한 double 말고 float을 써도 될 만했지??



	//여기서 만든 함수를 활용??? > 코드가 써봤는데 유용해 ... > 헤더에 파일을 만들고 또다른 소스 파일만들어서 
			//#include "floatcal.h" 이렇게 include 해주고 
	//헤더에는 메소드 선언부만 남겨놓는다. 





	//>> 분할 컴파일을 하는 방법을 배우고 있다. (클래스 개념처럼 쓰는 건가봄..?)

	// 분할 컴파일 장점
	//재사용성 증가
	//코드 가독성 증가


	
}


void print() {
	printf("monster");

	//main 밑에 함수를 선언했다면 순서상 못 읽는다. 그래서 선언부만 헤더와 같이 메인 위에 올려서 써주면 인식할 수 있다.
}
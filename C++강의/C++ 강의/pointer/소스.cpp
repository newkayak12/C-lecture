
//변수를 만들면 컴퓨터에 공간이 할당된다.
//int a = 20;
 //이라면 &a는 int*타입이다.

//a변수의 주소값을 저장하려고 한다면
//int* pa = &a; // * : 포인터 형지정자
//&pa 의 주소값의 데이터 타입은 int **
//int** ppa = &pa;  &(&a);

//ppa에 저장되어 있는 것은 pa의 주소 값이다.  *(변수를 만들 때 사용하면 포인터 형지정자)
//pa에 저장되어 있는 것은 a의 주소 값이다.    주소 값에다 사용하는 * 는 포인터 연산자

//포인터 연산자의 역할은 *ppa는 주소 값에 다 *를 붙인 것과 같다. 그러면 그 주소값이 할당 된 공간을 의미한다. *&pa > pa가 할당 받은 공간 > pa변수가 그 공간을 가리킨다.
//결국*& pa는 변수 pa랑 같다./*
//주소값에* 를 붙이면 그 저장 공간을 의미하고
//
//* ppa = pa
//ppa = &pa*/

//!!!!!!! **ppa = *&pa = *pa =(*&a) -> a; !!!!!!!!
//pa에는 &a가 들어가 있다. 

//*&pa 는 pa가 할당 받은 공간

//포인터를 이해한다. = 컴퓨터가 진행되는 것 자체를 이해

//
//다시!  *ppa = *&pa = pa
//		**ppa = *(*&pa)= *pa = *(&a) =a
//(** ppa = 40;) == (a = 40;)

#include <stdio.h>
#include <string.h>

// 문자열로 설명하려고 한다.

// 문자열 = 문자의 집합 = (char 타입의 집합)
// c, c++은 문자 배열/ 문자 열로 나눠진다. 
int strlen2(char* stre) {
	int count = 0;
	while (*stre++) {
		count++;
	}
	return count;
}

void charprint(char* str) {
	while (*str) {
		// *주소값 = 그 공간에 있는 내용문
		//while에 이렇게 쓸 수 있는 이유는 0이외의 숫자는 다 true; 그래서 문자열의 끝에 다다르면 0이 되고 false가 되면서 while 종료
		printf("%c", *str);
		str++;
	}
}


void main() {
	char str[7] = { 'M','o','n','s','t','e','r' }; //7바이트
	char str2[] = "monter"; //8바이트 왜????

	// 둘이 무슨 차이야?
	//"monster"는 다 같은데 마지막에 0이 들어간다. C랑 C++은 마지막에 이렇게 널종료문자(0)이 있으면 문자 열이라고 한다.
	//null 종료 문자가 없으면 문자 배열

	//C언어를 만들 때 문자 배열을 다루는 함수들을 만들려고 했는데
	// 문자열이 구성되는 길이가 어디까지인지 매 번 세야하지 strlen2같은 녀석을 사용하면
	// 그냥 문자열의 마지막에 Null 종료 문자를 집어넣고 여기가 마지막이라고 하자 ...
	// 단지 초기 주소값만으로는 어디서 끝나는지 모른다. 그냥 null 종료 문자를 넣고 거기가 문자열의 끝이라고 하는 걸로 


	char stre[10] = "monster";
	int count = strlen(stre);
	printf("count = %d\n", count);


	char stre1[1] = { 'm' };  // 이러면 어쩌다가 0을 만나서 그냥 거기서 멈춘거야

	int count2 = strlen(stre1);
	printf("count = %d\n", count2);
	printf("%s\n", stre1);


	// C에서 문자 배열의 마지막 공간에는 Null 종료 문자(0)을 넣고 거기까지가 문자열의 끝이라고 하자
	//라는 약속을 기반으로 문자열에 대한 함수가 설계가 되었다.


	/*C에서는 문자열(String)을 만들 때
		char stra[] = "monster"; 이렇게 쓴다. 그리고 컴파일러가 마지막에 0을 추가해준다.*/

	charprint(stre);

	//stre++;
	// stre 이 값 그 자체(할당받은 주소값의 그 자체)
	char* pstre = stre;
	//배열 명
	pstre++;

	char stri[] = "Monsldkjasdl;qjwelkxfalskdfjlwkrj";
	for (int i = 0; i < sizeof(stri) / sizeof(stri[0]); i++) {
		str[i];// 배열식??
		*(str + i);// 포인터식

		//배열과 포인터의 관계는 위와 같다.  배열을 접근할 때 포인터로 하려면 포인터식으로
		}

	// 포인터식으로 접근한다. 
	char* pstri = stri;
	//변수로 그냥 접근할 수 없으니까 포인터식으로 바꾸고 값을 증가시켜가면서 접근
	while (*pstri) {
		pstri++;
	}



	//변수를 만들 수 있는 가지 방법

	//변수의 종류는 몇 가지인가?
	//접근 범위와 존속 기간으로 변수를 나눌 수 있다.
	int add() {
		int a;
		//로컬 변수 / 함수가 끝나면 지워져서 자동변수라고 부른다.
	}
	int a
		// 전역변수 / 외부변수
		//static을 붙이면 정적변수 ()-> 함수 안에서 선언해도 휘발되지 않는다.


		//실행 중에 변수 공간을 만들 수 있다. 
		 //a는 4바이트가 확정된 것이다. 그러나 실행 중에 공간이 유동적으로 필요할 수도 있다. 
		// 예를 들어 ms word를 쓸 때 doc 파일이 다 크기가 다르다.  또한 그 공간 역시 사이즈가 결정되지 않았다(하드에..)
		//이럴 때는 메모리 공간을 동적으로 할당해야한다.




		//동적변수 (다음 장으로 ) > malloc/calloc/realloc 으로 동적으로 할당해서 사용하면 된다. 
}

#include <stdio.h>
#include <string.h>



	//학생관리용 프로그램을 의뢰 받았다고 하면 저장하기 위해서 필요한 기본적 데이터가 있다
	/*학번은 int
	이름은 char배열
	나이는 int*/

	//학생이 적어도 500명 될 것...
	//한 1000명 정도로 잡으면 메모리에 적어도 1000명 저장할 공간이 필요하다.
	//그러면 위의 데이터가 각각 1000개씩 필요하다.

	int noArray[1000];
	char name[1000][20];
	int ageArray[1000];
	//...하...
	//	//연관있는 데이터 끼리 묶어주는 구조체?

	//	위의 친구들을 묶어서 하나의 구조체로 만든다. 


	struct Student { //구조체 사용자 정의 데이터 타입  <C++스타일>
		int no;
		char name[20];
		int age;

};


	//typedef struct tagStudent { //구조체 사용자 정의 데이터 타입  <C스타일>
	//	int no;
	//	char name[20];
	//	int age;

	//}Student;




	//구조체는 서로 연관성 있는 데이터를 하나로 묶어서 새로운 데이터 타입을 생성한다.
	void main() {
		//<C++스타일>
		/*Student a = { 1,"monster",13 };*/

		//<C 스타일은?>
		/*struct Student b= { 1, "monster", 13 };*/

		// 객체 생성이랑 비슷하네??
		/*printf("no %d name = %s age %d", a.no, a.name, a.age);*/
		char str[20];
		Student array[100];
		for (int i = 0; i < 100; i++) {

			array[i].no = i;
			sprintf(str, "monster %d", i);
			strcpy(array[i].name, str);

			array[i].age = i % 20;

		}

		for (int i = 0; i < 100; i++) {
			printf("array[%d].no =%d\n", i,array[i].no);
			printf("array[%d].name =%s\n", i, array[i].name);
			printf("array[%d].age =%d\n", i, array[i].age);
		}




		Student a;
		Student b;
		/*a + b; 안된다... '+' 연산자는 기본 데이터 타입에 대한 연산 방법만 가지고 있다.
							그래서 우리가 만든 데이터 타입(구조체)에 대한 연산 방법은 모른다.....그래서 못 쓴다.*/

							//a=b는 된다.... a에 b를 대입해서 a를 b로 바꾸는 것같이 작용해서// 대입연산자는 서로의 데이터 타입만 일치한다면 언제든지 사용이 가능하다
							// 데이터 타입이 동일하다 > 데이터 사이즈, 형태가 동일하다는 의미
		b = a;
		// b값 출력

		printf("no = %d", b.no);
		printf("name = %s", b.name);
		printf("age = %d", b.age);


	}
	
	





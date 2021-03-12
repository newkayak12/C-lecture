
#include <stdio.h>


//1
//
//void add100(int *array, int size) {
//	//근데 이 주소값만으로는 사이즈를 할 수 없지
//	array[0] += 100;
//
//}
//

//2
//
//void add(int a, int b, int* result) {
//	*result = a + b;
//}

void add(int a, int b, float* result) {
	*result = (float)a + b;
}

void sub(int a, int b, float* result) {
	*result = (float)a - b;
}

void multi(int a, int b, float* result) {
	*result = (float)a * b;

}

void div(int a, int b, float* result) {
	*result = (float)a / b;
}
/// <summary>


struct Student {
	int age;
	int grade; 
	int no;

	

};

void change(Student* pst) {

		
	pst->age =1;
	pst->grade = 2;
	pst->no = 3;
}


void change2( const Student* pst) {


	pst->age = 1;
	pst->grade = 2;
	pst->no = 3;
}

void change(Student* const pst) {
	// 주소 값을 변경 불가

	pst->age = 1;
	pst->grade = 2;
	pst->no = 3;
}

void main() {
	
	//1
	//int array[100];


	//array[0] = 20;
	//add100(array, 100);

	//printf("array[0]= %d\n", array[0]);


	//2
	/*int a = 20;
	int b = 39;
	int result;

	add(a, b, &result);
	printf("%d + %d =%d", a, b, result);*/



	// 덧셈 뺄셈 곱셈 나눗셈 함수를 void형으로 만들고 결과값을 출력

	int a = 20;
	int b = 30;
	float result;

	add(a, b, &result);
	printf("%d + %d = %.0f\n", a, b, result);
	sub(a, b, &result);
	printf("%d - %d = %.0f\n", a, b, result);
	multi(a, b, &result);
	printf("%d * %d = %.0f\n", a, b, result);
	div(a, b, &result);
	printf("%d / %d = %.1f\n", a, b, result);
	
	Student k;
	// a 변수의 멤버값 age : 1, grade 3 no 1234 를 입력하는 함수를 만든다.
	//a변수의 값을 출력
	//주소값을 가지고 멤버변수에 접근하면->연산자를 사용한다... 람다식이냐 ?

		(&k)->age = 120;
		change(&k);
		printf("age %d, grade %d, no %d", k.age, k.grade, k.no);
}

#include <stdio.h>


//1
//
//void add100(int *array, int size) {
//	//�ٵ� �� �ּҰ������δ� ����� �� �� ����
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
	// �ּ� ���� ���� �Ұ�

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



	// ���� ���� ���� ������ �Լ��� void������ ����� ������� ���

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
	// a ������ ����� age : 1, grade 3 no 1234 �� �Է��ϴ� �Լ��� �����.
	//a������ ���� ���
	//�ּҰ��� ������ ��������� �����ϸ�->�����ڸ� ����Ѵ�... ���ٽ��̳� ?

		(&k)->age = 120;
		change(&k);
		printf("age %d, grade %d, no %d", k.age, k.grade, k.no);
}
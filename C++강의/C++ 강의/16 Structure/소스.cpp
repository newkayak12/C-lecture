#include <stdio.h>
#include <string.h>



	//�л������� ���α׷��� �Ƿ� �޾Ҵٰ� �ϸ� �����ϱ� ���ؼ� �ʿ��� �⺻�� �����Ͱ� �ִ�
	/*�й��� int
	�̸��� char�迭
	���̴� int*/

	//�л��� ��� 500�� �� ��...
	//�� 1000�� ������ ������ �޸𸮿� ��� 1000�� ������ ������ �ʿ��ϴ�.
	//�׷��� ���� �����Ͱ� ���� 1000���� �ʿ��ϴ�.

	int noArray[1000];
	char name[1000][20];
	int ageArray[1000];
	//...��...
	//	//�����ִ� ������ ���� �����ִ� ����ü?

	//	���� ģ������ ��� �ϳ��� ����ü�� �����. 


	struct Student { //����ü ����� ���� ������ Ÿ��  <C++��Ÿ��>
		int no;
		char name[20];
		int age;

};


	//typedef struct tagStudent { //����ü ����� ���� ������ Ÿ��  <C��Ÿ��>
	//	int no;
	//	char name[20];
	//	int age;

	//}Student;




	//����ü�� ���� ������ �ִ� �����͸� �ϳ��� ��� ���ο� ������ Ÿ���� �����Ѵ�.
	void main() {
		//<C++��Ÿ��>
		/*Student a = { 1,"monster",13 };*/

		//<C ��Ÿ����?>
		/*struct Student b= { 1, "monster", 13 };*/

		// ��ü �����̶� ����ϳ�??
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
		/*a + b; �ȵȴ�... '+' �����ڴ� �⺻ ������ Ÿ�Կ� ���� ���� ����� ������ �ִ�.
							�׷��� �츮�� ���� ������ Ÿ��(����ü)�� ���� ���� ����� �𸥴�.....�׷��� �� ����.*/

							//a=b�� �ȴ�.... a�� b�� �����ؼ� a�� b�� �ٲٴ� �Ͱ��� �ۿ��ؼ�// ���Կ����ڴ� ������ ������ Ÿ�Ը� ��ġ�Ѵٸ� �������� ����� �����ϴ�
							// ������ Ÿ���� �����ϴ� > ������ ������, ���°� �����ϴٴ� �ǹ�
		b = a;
		// b�� ���

		printf("no = %d", b.no);
		printf("name = %s", b.name);
		printf("age = %d", b.age);


	}
	
	





#include<iostream>
using namespace std;

class Animal {
public:
	//int _type; // 0���� 1�� 2�� 3��... ����.. �� �׸� �߰��϶�� �ض�!! ������ �� Ŭ������ ������ ����� �͵� �߰��ش޶��???

	//Animal(int type) : _type(type) {
	//	
	//}
	Animal* _o;
	
	Animal(Animal* _o) : _o {

	}

	~Animal() {
		

	}

	virtual void speak() {
					cout << "����" << endl;
	}		


	void walk() {

	}
	
	// �̷��� ��������� �����ϸ� �� ��ü���� Ư���� ���� ��� �ڽ����� �������� ���� ����غ��� �� ����


};

class Pig:public Animal {
public:
	Pig() {

	}
	~Pig() {

	}

	void speak() override {
		cout << "�ܲ�" << endl;
	}
};

class Cow :public Animal {
public:

	Cow() {

	}
	~Cow(){

	}
	void speak() override {
		cout << "����" << endl;
	}
};

class Dog :public Animal {
public:

	Dog() {

	}
	~Dog() {

	}
	void speak()override {
		cout << "�۸�" << endl;
	}
};

class Chicken :public Animal {
public:
	void speak() override {
		cout << "������" << endl;
	}
};


class Dolphine :public Animal {
public:
	void speak( )override {
		cout << "����?" << endl;
	}
	void swim() {

	}

	// �̷��� ��ü���� ���ȭ�� ���� �ڽ����� ������ ���� 'Ư��ȭ'��� �Ѵ�.
};

int main() {

	Animal* o;

	



	return 0;
}
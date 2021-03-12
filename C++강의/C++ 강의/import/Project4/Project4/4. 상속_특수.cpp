#include<iostream>
using namespace std;

class Animal {
public:
	//int _type; // 0돼지 1소 2개 3닭... 돌고래.. 아 그만 추가하라고 해라!! 심지어 이 클래스의 범위를 벗어나는 것도 추가해달라고???

	//Animal(int type) : _type(type) {
	//	
	//}
	Animal* _o;
	
	Animal(Animal* _o) : _o {

	}

	~Animal() {
		

	}

	virtual void speak() {
					cout << "동물" << endl;
	}		


	void walk() {

	}
	
	// 이렇게 비대해지기 시작하면 이 모체에서 특수한 것을 떼어서 자식으로 내려보낼 것을 고려해보는 게 좋아


};

class Pig:public Animal {
public:
	Pig() {

	}
	~Pig() {

	}

	void speak() override {
		cout << "꿀꿀" << endl;
	}
};

class Cow :public Animal {
public:

	Cow() {

	}
	~Cow(){

	}
	void speak() override {
		cout << "음매" << endl;
	}
};

class Dog :public Animal {
public:

	Dog() {

	}
	~Dog() {

	}
	void speak()override {
		cout << "멍멍" << endl;
	}
};

class Chicken :public Animal {
public:
	void speak() override {
		cout << "꼬끼오" << endl;
	}
};


class Dolphine :public Animal {
public:
	void speak( )override {
		cout << "이익?" << endl;
	}
	void swim() {

	}

	// 이렇게 모체에서 비대화된 것을 자식으로 나누는 것을 '특수화'라고 한다.
};

int main() {

	Animal* o;

	



	return 0;
}
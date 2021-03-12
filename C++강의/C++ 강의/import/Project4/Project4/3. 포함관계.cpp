#include <iostream>
using namespace std;

class Arm {
public:
	virtual void info() {
		cout << "Arm" << endl;
	}
	~Arm() {

	}
};

class RocketArm : public Arm {
public:
	void info() override {
		cout << "Rocket Arm" << endl;
	}

	~RocketArm() {

	}
};

class GunArm : public Arm {
public:
	void info() override {
		cout << "Gun Arm" << endl;
	}
	~GunArm() {

	}

};

class RaserArm : public Arm {
public:
	void info() override {
		cout << "Raser Arm" << endl;
	}
	~RaserArm() {

	}
};


class ShotgunArm : public Arm {
public:
	void info() override {
		cout << "Shotgun Arm" << endl;
	}
	~ShotgunArm() {

	}
};

class Robot {
public:
	Arm* _left;
	Arm* _right;

	Robot(Arm* left, Arm* right) : _left(left), _right(right) {

	}

	~Robot() {
		if (_left != NULL) {
			delete _left;
			_left = NULL;
		}
		if (_right != NULL) {
			delete _left;
			_right = NULL;
		}
		// gc가 원래 해주던 일인데 이렇게 직접 하는걸 기억하셔야 합니다. C++은
		
	}

	void changeLeftArm(Arm* left){
		_left = left;
};
	void changeRightArm(Arm* right) {
		_right = right;
	};
	virtual void ArmInfo() {
		_left->info();
		_right->info();
	}
};

class RobotM  :public Robot {

public:
	Arm * _middle;
	RobotM(Arm *left, Arm* right, Arm* middle) : Robot(left, right), _middle(middle) {};

	void  ArmInfo() override {
		_left->info();
		_right->info();
		_middle->info();
	}
		~RobotM() {
	}
	void changeMiddle(Arm* middle) {
		_middle = middle;

	}

};

// 이렇게 팔이 추가 될 때마다 새로 클래스 만들꺼야? > 이렇게 상속 관계 때문에 이 틀을 지키면서 계속 만들어 나가는 것을 rigid라고 한다....
//
//int main() {
//	//gun robot 만들기
//
//	GunArm gun;
//	RocketArm rocket;
//
//	Robot * robot = new Robot( new Arm, new Arm);
//	robot->ArmInfo();
//	//자바에서 쉽게 하던게 어떻게  실제로 구현되는지 보는 것 같네 ㅋㅋ
//
//	robot->changeLeftArm(new GunArm);
//	robot->changeRightArm(new GunArm);
//	robot->ArmInfo();
//	
//	robot->changeLeftArm(new RocketArm);
//	robot->changeRightArm(new RocketArm);
//	robot->ArmInfo();
//
//	robot->changeLeftArm(new RaserArm);
//	robot->changeRightArm(new RaserArm);
//	robot->ArmInfo();
//
//
//	robot->changeLeftArm(new ShotgunArm);
//	robot->changeRightArm(new ShotgunArm);
//	robot->ArmInfo();
//
//	printf("\n 팔이 세 개 \n");
//	RobotM * rm = new RobotM(new Arm, new Arm, new Arm);
//	rm->ArmInfo();
//	// 이거 일일이 닫아주는게 생각보다 빡세네
//
//	printf("\n 샷건 / 로켓 / 레이저 \n");
//	rm->changeLeftArm(new ShotgunArm);
//	rm->changeRightArm(new RaserArm);
//	rm->changeMiddle(new RocketArm);
//	rm->ArmInfo();
//	return 0;
//}
// 이렇게 하면 굉장히 flexible하네 

//앱> 프론트를 기본으로하고 백엔드를 추가로 하는 개념 > 궁극적으로 풀스택
//플루터 찾아보고
//자바스크립트 꼭 빡세게 하고커


//상속 > 일반화 방법으로 지금까지 했던거야. (개발 초기에 이런 일이 생기고)
// ani을 만들었는데 얘가 비대해지고 복잡해진다고 했을 때 > 추가하기가 어려워지고... 분기/조건문이 늘어나고 ㅋㅋ
 // 여기서 특별한 부분을 떼어서 자식 클래스로 내려주는 것을 '특수화'라고 한다. >> 개발 과정 중에 이런 일이 생기고








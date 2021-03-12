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
		// gc�� ���� ���ִ� ���ε� �̷��� ���� �ϴ°� ����ϼž� �մϴ�. C++��
		
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

// �̷��� ���� �߰� �� ������ ���� Ŭ���� ���鲨��? > �̷��� ��� ���� ������ �� Ʋ�� ��Ű�鼭 ��� ����� ������ ���� rigid��� �Ѵ�....
//
//int main() {
//	//gun robot �����
//
//	GunArm gun;
//	RocketArm rocket;
//
//	Robot * robot = new Robot( new Arm, new Arm);
//	robot->ArmInfo();
//	//�ڹٿ��� ���� �ϴ��� ���  ������ �����Ǵ��� ���� �� ���� ����
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
//	printf("\n ���� �� �� \n");
//	RobotM * rm = new RobotM(new Arm, new Arm, new Arm);
//	rm->ArmInfo();
//	// �̰� ������ �ݾ��ִ°� �������� ������
//
//	printf("\n ���� / ���� / ������ \n");
//	rm->changeLeftArm(new ShotgunArm);
//	rm->changeRightArm(new RaserArm);
//	rm->changeMiddle(new RocketArm);
//	rm->ArmInfo();
//	return 0;
//}
// �̷��� �ϸ� ������ flexible�ϳ� 

//��> ����Ʈ�� �⺻�����ϰ� �鿣�带 �߰��� �ϴ� ���� > �ñ������� Ǯ����
//�÷��� ã�ƺ���
//�ڹٽ�ũ��Ʈ �� ������ �ϰ�Ŀ


//��� > �Ϲ�ȭ ������� ���ݱ��� �ߴ��ž�. (���� �ʱ⿡ �̷� ���� �����)
// ani�� ������µ� �갡 ��������� ���������ٰ� ���� �� > �߰��ϱⰡ ���������... �б�/���ǹ��� �þ�� ����
 // ���⼭ Ư���� �κ��� ��� �ڽ� Ŭ������ �����ִ� ���� 'Ư��ȭ'��� �Ѵ�. >> ���� ���� �߿� �̷� ���� �����








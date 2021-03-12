//#include <iostream>
//using namespace std;
//
//class Arm {
//
//};
//
//class RocketArm : public Arm {
//
//};
//
//class GunArm : public Arm {
//
//
//};
//
//
//class Robot {
//public:
//	Arm _left;
//	Arm _right;
//
//	Robot(Arm left, Arm right) : _left(left), _right(right) {
//
//	}
//};
//
//
//class GunRobot : public Robot{
//public:
//	GunArm left;
//	GunArm right;
//
//	GunRobot() {
//		
//		
//		_left = left;
//		_right = right;
//	}
//
//};
//
//class RocketRobot : public Robot {
//public:
//	RocketRobot() {
//
//	}
//};
//
//// 이렇게 팔이 추가 될 때마다 새로 클래스 만들꺼야? > 이렇게 상속 관계 때문에 이 틀을 지키면서 계속 만들어 나가는 것을 rigid라고 한다....
//int main() {
//
//	return 0;
//}

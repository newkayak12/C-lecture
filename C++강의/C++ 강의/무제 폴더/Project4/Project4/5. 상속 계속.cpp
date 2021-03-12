// 부모의 기능을 받아서 확장/ 재사용성/ 구조적인 ..

// 일반화 // 특수화
//--------------- 여기까지

// 포함 관계   (멤버 객체가 생명 주기를 같이할 때)
// 참조 관계   (

#include <iostream>
using namespace std;

class Point {
public:
	int _x, _y;

	Point () : _x(0), _y(0) {
		cout << "point  생성자" << endl;
	}

	~Point() {
		cout << "point 소멸자" << endl;
	};
};

class Triangle {
	Point*  _pt1;
	Point* _pt2;
	Point* _pt3;
public:	
	Triangle() {
		cout << "Tri 생성자" << endl;
	}

	Triangle(Point* p1, Point* p2, Point* p3)
		: _pt1(p1), _pt2(p2), _pt3(p3) {
		cout << "Tri 생성자" << endl;
	}
	
	~Triangle() {
		cout << "Tri 소멸" << endl;
	}
};
// 이렇게 생성/ 소멸, 운명을 같이 하는 녀석들

// 반대로 다른 곳에서 만들어져서 같이 죽지 않는 녀석들
// �θ��� ����� �޾Ƽ� Ȯ��/ ���뼺/ �������� ..

// �Ϲ�ȭ // Ư��ȭ
//--------------- �������

// ���� ����   (��� ��ü�� ���� �ֱ⸦ ������ ��)
// ���� ����   (

#include <iostream>
using namespace std;

class Point {
public:
	int _x, _y;

	Point () : _x(0), _y(0) {
		cout << "point  ������" << endl;
	}

	~Point() {
		cout << "point �Ҹ���" << endl;
	};
};

class Triangle {
	Point*  _pt1;
	Point* _pt2;
	Point* _pt3;
public:	
	Triangle() {
		cout << "Tri ������" << endl;
	}

	Triangle(Point* p1, Point* p2, Point* p3)
		: _pt1(p1), _pt2(p2), _pt3(p3) {
		cout << "Tri ������" << endl;
	}
	
	~Triangle() {
		cout << "Tri �Ҹ�" << endl;
	}
};
// �̷��� ����/ �Ҹ�, ����� ���� �ϴ� �༮��

// �ݴ�� �ٸ� ������ ��������� ���� ���� �ʴ� �༮��
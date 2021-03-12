// 연산자 오버로딩!

#include <iostream>
using namespace std;

class Point {
private:
	int _x;
	int _y;

public:
	Point(int x, int y) : _x(x), _y(y) {

	}

	Point& operator*(Point& ref) {
		Point temp(_x * ref._x, _y * ref._y);

		return temp;
	}


	Point& operator-(Point& ref) {
		Point temp(_x - ref._x, _y - ref._y);

	
		return temp;
	}

	Point& operator+(Point& ref) {
		Point temp(_x + ref._x, _y + ref._y);

		return temp;
	}

	Point& operator/(Point& ref) {
		Point temp(_x / ref._x, _y / ref._y);

		return temp;
	}

	void info() {
		cout << "x : " << _x << endl;
		cout << "y : " << _y << endl;
	}
	friend ostream& operator<<(ostream& out, Point& ref);
};

ostream& operator << (ostream& out, Point& ref) {
	out << "x : " << ref._x << " , " << "y : " << ref._y << endl;


	return out;
}




int main()
{
	Point a(10, 20);
	Point b(20, 40);
	


	

	Point c(0, 0);
	


	//c = a.operator*(b);
	c = a * b;
	
	//c.info();
	//operator<<(cout, c);
	cout << c;
	
	
	c = a.operator+(b);
	//c.info();
//	operator<<(cout, c);
	cout << c;/////////???????????????????
	
	c = a.operator-(b);
	//c.info();
	//operator<<(cout, c);
	cout << c;
	
	c = b.operator/(a);
	//c.info();
	//operator<<(cout, c);
	cout << c;
// 연산자 오버로드 클래스의 멤버함수 혹은 일반함수로

	


}


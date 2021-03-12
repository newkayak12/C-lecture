#include <iostream>
using namespace std;

class Point {
private:
	int _x;
	int _y;

public:	
	Point(int x, int y) : _x(x), _y(y) {

	}
	Point(double i ): _x(0), _y(i){
	}

	operator int(){
		return _x;
	}
	operator float() {
		return _x;
	}

	 operator double() {
		return _x;
	}
	//리턴 값이 뭐... >> 변환 함수에 변환 형식을 지정할 수 없다. 
};


int main() {

	Point a(10, 10);

	int c;
	float d;
	double k;

	//c = a;    > 이게 당연히 안되는거지 뭘...

	// 근데 연산자 오버로드를 하면
	c = a; //가능하지 > (int)a
	d = a;
	k = a;
	// 이 연산자 오버로드라는 개념이 정말 재밌는 개념이네 ㅋㅋㅋ 골때리네 ㅋㅋ

	//왼쪽 int / 오른쪽 포인터 타입/ 


	//이 반대의 경우는??

	double j = 1.2;
	a = j;
	// 이러면 해당 객체에 생성자를 만들어줘서
	
	/*Point(double i) : _x(0), _y(i) {
	}
	
	이렇게 해서 문제를 해결한다.*/

	cout << c << "/" << d << "/" << k << endl;
	return 0;
}
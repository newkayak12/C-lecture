#include <iostream>
using namespace std;

class Point {
	int x;
	int y;



public:
	Point() {
		x = 0;
		y = 0;
	}

	Point(int _x, int _y) {
		x = _x;
		y = _y;
	}

	int getX() {
		return x;
	}
	int getY() {
		return y;
	}

	void setX(int _x) {
		x = _x;
	}

	void setY(int _y) {
		y = _y;
	}

	void info() {
		//printf("( %d, %d) \n", x, y);
		
		cout << "x : " << x << endl;
		cout << "y : " << y << endl;
		printf("\n");
	}
	~Point() {

	}

};



void main() {
	Point pt1( 10, 10 );
	Point pt2( 20, 20 );

	pt1.info();
	pt2.info();


	struct Hello
	{
	 
		int a = 1;

	public:
		Hello() {

		}
		void mai() {

		}


		~Hello() {

		}

	};












}

//숙제 > 집에 있는 물건 세 개만 단순화 시켜서 클래스로 만들어오세요\
//물건을 단순화 시키려면 어디에 사용할 것인지
//it쪽에서는 대상 객체가 현실 세계에 존재하는 것들
// 

//기능만 있는 것도 클래스화 할 수 있고 

// 데이터화할 수 있다면 상상하는 모든 것은 클래스로 구현할 수 있습니다.

//대상 객체가 있다면 대상객체를 추상화(필요한 정보를 추려서 단순화 시키는 것)하고 
//소프트웨어라면 (사용 목적,역할 등)
// 정리를 했다면 캡슐화가 필요하다.
//필요한 정보를 쓰고 그걸 클래스로 묶어준다.


//이런 작업은 그러한 데이터 타입을 (클래스도 데이터 타입으로 볼 수 있으니까) 만들었다고 생각할 수 있다.
// 메인에서 클래스 타입 + 변수로 쓸 경우 이 변수는 일종의 객체로 볼 수 있다.
//실제로 메모리에 이 객체가 올라간 것은 인스턴스라고 부른다.

//캡슐화의 기본 정책은 정보 은닉 


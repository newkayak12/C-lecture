// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
// 커피숍 관리 플그램 만들어달라는 의뢰 > 가서 업무 흐름 파악 
#include <iostream>
// 다형성 : 객체가 같은 메시지에 다른 반응을 보임
// 객체의 멤버함수 호출하는 것을 객체에 메시지를 보냈다고 한다.

using namespace std;
class Desert {

public :
	virtual void MakeADesert() = 0;
};

class Cake : public Desert {
public:	
	void MakeADesert(){
		cout << "make a cake" << endl;
	}
};

class Muffin : public Desert {
public:
	void MakeADesert() {
		cout << "make a muffin" << endl;
	}
};

class Crape  : public Desert {
public:
	void MakeADesert() {
		cout << "make a crape" << endl;
	}
};

class Drink {

public:
	virtual void MakeADrink() = 0; // 이렇게 해놓으면 순수 가상함수 (추상메소드), 
													// 가상함수 뒤에 =0; 구현부를 만들지 않으면 순수 가상함수가 된다.
	// 순수 가상함수를 하나라도 가지고 있는 클래스는 추상 클래스라고 한다.
	// 추상클래스 자기 자신의 객체 생성 능력은 상실되지만 자신한테서 상속받은 자식 클래스가 순수 가상함수를 구현하도록 강제할 수 있다. 
};

class Coffee :public Drink {
public:
	void MakeADrink() override {
		cout << "Make a coffee" << endl;
	}

};

class Latte : public Drink {
public:
	void MakeADrink() override {
		cout << "Make a Latte" << endl;
	}

};

class Juice : public Drink {
public:
	void MakeADrink() override {
		cout << "Make a juice" << endl;
	}


};

class BanillaLatte : public Drink {
public:
	void MakeADrink() override {
		cout << "Make a 바닐라라떼" << endl;
	}

};

class grape : public Drink {
public:
	void MakeADrink() override {
		cout << "Make a 청포도 에이드" << endl;
	}
};


class choco : public Drink {
public:
	void MakeADrink() override {
		cout << "Make a 핫초코" << endl;
	}
};

class javachip : public Drink {
public:	
	void MakeADrink() override {
		cout << "Make a 자바칩프라푸치노" << endl;
	}
};

class Green : public Drink {
public:
	void MakeADrink() override {
		cout << "Make a Green Tea" << endl;
	}
};

class HoneyTea : public Drink {
	//상속 받았다고 항상 오버라이드 하는 건 아니지 않아?
	// 이 상태에서 컴파일하면 에러나는 식으로 밖에 안나온다. (자바처럼 jvm 선에서 처리해주는 건 아닌가보오)
public:
	void MakeADrink() override {
		cout << "Make a 허니티" << endl;
	}
};

class Barista {
public:
	void MakeADrink(Drink & ref) {
		ref.MakeADrink();
	}
	void MakeADesert(Desert & ref) {
		ref.MakeADesert();
	}
		

};

class Cashier {
public:
	Barista * _bari;

	void SetBarista(Barista * bari) {
		_bari = bari;
	}

	void OrderADrink(Drink & ref) {
		_bari->MakeADrink(ref);
	}
	void OrderADesert(Desert & ref) {
		_bari->MakeADesert(ref);
	}


};

int main() {
	Barista bari;
	Cashier cash;

	cash.SetBarista(&bari);

	Coffee a;
	Latte b;
	BanillaLatte c;
	grape d;
	choco e;
	HoneyTea f;
	javachip g;
	Green i;
	cash.OrderADrink(a);
	cash.OrderADrink(b);
	cash.OrderADrink(c);
	cash.OrderADrink(d);
	cash.OrderADrink(e);
	cash.OrderADrink(f);
	cash.OrderADrink(g);
	cash.OrderADrink(i);


	Crape a1;
	Cake a2;
	Muffin a3;
	cash.OrderADesert(a1);
	cash.OrderADesert(a2);
	cash.OrderADesert(a3);

	return 0;
}

// 여튼 다형성 구성에 오버로드로 하거나 상속을 하고 오버라이드로 하거나
// Drink의 범위를 넓히거나
// Drink의 상위로 만들어서 이게 더 깔끔하겠고

//시간의 문제겠지?? 그 상황(시간/비용)에 맞춰서 찍어낼 줄 아는 능력이 필요한거지... 꼭 장인 정신을 가지고 만들어야한다 ? 우리나라에서는 그건 꼭 아닐 수도 있다는 말씀일거야

//템플릿 / 네임스페이스도 해야하지 

// 대상 객체(현실) > 추상화 > 캡슐화 > 데이터 타입(클래스형 데이터 타입) > 객체 > 인스턴스(메모리에 객체가 올라가(할당된) 있는 상태) > 객체 간의 관계를 설정할 수 있다. > 계층구조 (상속) / 다른 객체가 어떤 객체를 맴버 변수로 가지는 것 (포함)
// 포함 안에는 (포함/참조) > 객체간 메시지를 주고 받을 수 있다. > 메시지 주고 받는 것을 효율성 있게 다형성 > 오버로드는 같은 함수를 여러 개 만들어서 /  상속관계에서 부모의 함수를 자식이 재정의 해서 구현하는 것 (오버라이드)
//>부모가 자식에게 함수를 꼭 만들라고 강제할 수 있다. (순수 가상함수)> 순수 가상함수를 하나라도 갖고 있으면 추상 클래스가 된다.  > 추상클래스는 자기 자신의 객체 생성 능력이 상실된다. 

//캡슐화
//상속
//다형성
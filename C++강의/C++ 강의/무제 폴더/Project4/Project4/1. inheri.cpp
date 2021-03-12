////일반화
////특수화
////포함
////참조
////업캐스팅
////다운캐스팅
//
//
////대상객체
////필요한 정보를 취해서 단순화 시키고
////정보가지고 class키워드로 묶어서 캡슐화 했죠
////캡슐화 하면 뭐가 만들어질까요
//
//
////상속 > 객체 간의 관계를 맺는 방법을 상속이라고 한다.
//// 포함 > 어떤 클래스가 다른 클래스 객체를 멤버로 가지고 있으면 포함이라고 한다.
//
//#include <iostream>
//using namespace std;
//
//class Pig{
//	int _age;
//	int _health;
//	int _weight;
//public:
//	void speak() {
//		cout << "꿀꿀" << endl;
//	}
//
//};
//
//class Cow {
//	int _age;
//	int _health;
//	int _weight;
//public:
//	void speak() {
//		cout << "음메" << endl;
//	}
//};
//
//
//
////원래는 이렇게 했는데 상속을 통해서
//
//
//class Animal {
//	int _age;
//	int _health;
//	int _weight;
//public:
//	virtual void speak() { // 여기에 오버라이드를 할 함수를 virtual로 선언
//		cout << "울음소리" << endl;
//	}
//	void walk() {
//
//	}
//
//};
//
//class Pig2 : public Animal {
//public:
//	 void speak() override { // 가상함수 > 실제 저장된 데이터 타입에 준해서 작동한다. 
//		cout << "꿀꿀" << endl;
//	}
//};
//
//class Cow2 : public Animal {
//public:
//	void speak() override{
//		cout << "음메" << endl;
//	};
//};
//
//void finc(Animal* p) {
//	p->speak();
//	//>> p -> vfptr[0](); 이런식으로 
//}
//
//
////
////int main() {
////	Animal *p = new Pig2(); // 업캐스팅 > 
////
////	//pig와 cow 가 10마리씩
////	Pig2 pigArray[10];
////	Cow2 cowArray[10];
////
////
////	for (int i = 0; i < 10; i++) {
////		pigArray[i].speak();
////		cowArray[i].speak();
////		//부모의 데이터 타입으로 자식의 데이터를 넣을 수 있다고 하면 어떤 장점이 있냐면????
////
////	}
//
//
//	// 이렇게 할 수 있겠지?? 부모의 데이터 타입에 자식을 넣을 수 있으니까 말이야
//
//	Animal * parray[20];
//	for (int i = 0; i < 40; i++) {
//		if (i % 2 == 0) {
//			parray[i] = new Pig2();
//
//		}
//		else {
//			parray[i] = new Cow2();
//		}
//	}
//
//
//	// Animal 타입이랑 Animal 포인터 형이랑 무슨 차이가 있는지 정확히 모르겠어 접근 할 때 Animal이 전체의 길이를 받아서 더 무겁고 포인터형이 처음의 길이를 잡아서 넣는다는 것 떄문에 더 가벼워서 빠르다는 것 밖에는..
//	for (int i = 0; i < 20; i++) {
//		parray[i]->speak();
//
//	}
//
//	return 0;
//}
//
////
////public:
////	virtual void speak() {
////		cout << "음메" << endl;
////	}
//// virtual 예약어를 사용야 자식의 것을 부른다. (가상함수라고 한다.) virtual을 붙이지 않으면 일반함수 이라고 한다. 
//// 참고로 자바는 자동적으로 다형성에 의해서 오버라이드 된 메소드는 부모의 것이 아닌 자식의 것을 부르는데 반해 C++ 는 그렇지 않다. 아마 small talk에 있는 성질을 가져왔나보다.
//
//
//// Animal*p  p 는 Animal 타입의 주소값을 저장하는 변수 근데 여기에 Pig 객체가 들어가잖아요 일반함수는 데이터 타입에 준해서 작동하고  (자바는 이럴 경우 super()로 호출하지 > 이건 자바가 다중 상속이 안되니까 super로 부를 수 있는거지 사실 
//// virtual 함수는 실제 저장된 데이터 타입에 준해서 작동한다. 
//
//
////일반멤버함수 (정적 바인딩) // 컴파일 타임에 결정이 난다.
////가상멤버함수 (동적 바인딩) // 실행중에 결정이 난다. 
//
//
//
//// 내부적으로 작동하는 원리 *********
//
////가상함수는 가상함수 테이블이 만들어진다.  > 클래스마다 > (각 클래스 안에 있는 함수들의 주소 값을 가상 함수 테이블로 보낸다.
//// pig의 경우는 speak는 pig의 것으로 animal의 일반 함수인 walk는 pig의 함수테이블 속에  Animal::walk으로 저장된다.
//
////자동으로 가상함수가 하나라도 있으면 vfptr이 가상함수의 주소값을 갖고 있다. 
////
//
//
////void finc(Animal* p) {
////	p->speak();
//	//>> p -> vfptr[0](); 이런식으로 
//		// 그래서 pig가 오면 vfptr의 인덱스가 바뀌면서 pig의 것으로 바꿔주는 식이다.  >> 자바는 원래부터 가상화상태로 한다.


////}
//
//
//
//// 상속을 하게 되면  구조가 딱딱해진다고 합니다?? >> (rigid)해진다.
//
//

//다시 정리하는 타이밍!

//프로그래밍 > 변수/연산자/함수/제어문 이정도는 아셔야 해요
//변수 > 컴퓨터 프로그래밍 언어를 배우는 목적은 컴퓨터한테 일을 시키려고 하는거죠?
//        ㄴ 컴퓨터한테 일을 시키려면? 램에 공간을 할당을 시키고 일감을 줘야햐죠
//        ㄴ 일감을 담아주는 것이 변수에요
//		  ㄴ 만약 20과 30을 더하라는 일을 시키고 싶어요 그러면 20, 30을 컴퓨터한테 전달해야하죠 그 때 변수를 만듭니다.ㅣ
				//int a = 20;
				//int b = 30;


//Cpu / ram / hdd / monitor / speaker/keyboard / mouse / 등등이 있죠?
/*CPU = 연산 장치 : 계산 담당
Ram = 저장 장치 : 속도가 빨라요
hdd = 저장 장치 : 속도가 느려요 CPU보다.. 그래서 상대적으로 속도가 빠른 ram으로 넘기고(Buffer같이) 그 다음에 CPU로 넘긴다고요
등등등  이러한 장치들을 이용해서 입력하고 계산하고 출력하는*/



/*
*  변수를 만들면 Ram에 공간이 할당되는데 여기서 int a= 20; 에 있는 a로 램에  접근한다고요
* 그리고 int a; 이러면 램에 일정한 공간을 만듭니다.
* 
* 
* 
*        기본형은
* 
*  정수형 : 자연수(양의 정수)/ 0/ 음의 정수 eg)-1, 0, 1 등..  // int, short long (unsigne라는 키워드를 붙이면 0/ 양의 정수만 사용)
*				eg) unsigned long 등 얘들은 다 사이즈가 달라요
*			: int a; (여기서 int는 데이터 타입이라고 하고 메모리 공간에 할당할 크기를 알 수 있어요 그리고 그 저장 공간을 뭘로 쓸건지 얘기하는 거에요) > 4바이트짜리 정수 저장 공간
*			: a에는 그 저장 공간에 할당된 값이 저장된다고요	   
*			:  
*				
*  실수형 : 
*  문자형 : 컴퓨터를 미국에서 만들 때 127개의 문자를 정의 했다. ASCII코드라고 한다
*		  :  8비트의 저장공간에 7비트 값을 저장 > char형이다. 
*  boolean : 참/ 거짓(0) 
* 
*  연산자 > 산술연산자 +,-,*,/,%
*		  > 관계연산자 <,>,<=,>=,==,!= : 피연산자 간의 대소 비교나 동등을 비교
*		  > 논리연산자 &&,||,! :피연산자의 데이터 타입은? bool
*		  > 대입 연산자  a (leftValue) = 20 (rightValue);   오른쪽 값을 왼쪽에 넣는다.
* 
* 
* 
*/

int add(int a, int b) {
	int result = a + b;


	return result;
}
// 함수도 데이터 타입이다. 위와 같은 코드를 묶는  >> 함수형이라고 한다.






/*  우리 수업 전체적인 틀
* 객체지향 언어 > 추상화(모양을 뽑아냄) > 어떤 모양이요? 공통적으로 갖고 있는 모양을
*  지구본 > 뭘 단순화 시켰나?? > 지구 > 지구는 굉장히 많은 정보를 갖고 있죠 > 지구본/지도 > 내가 필요한 정보만 추려서 단순화 시킴
*  객체지향은 이러한 추상화 개념을 사용하는 프로그래밍 방식
*
*
*	손흥민이라는 대상 객체가 있으면
*	동사무소에서 사용하는 손흥민의 정보와 게임에서 사용하는 손흥민의 정보는 다르겠지 (각 상황에 맞춰서 단순화시키겠죠)
*
* 동사무소에서는 이름/ 주소/ 출생지/ 주민등록 번호/ 혼인 여부/ 연락처/ 병역 사항 등등..
* 게임에서는 이름/ 속력/ 가속도/ 슛 정확도/ 슛 세기/ 포지션/ 등번호 등등
*
* 손흥민이라는 대상은 하나인데 다 다르다고요 필요한 정보는 > 이 과정을 추상화 단계라고 한다.

* 객체 지향의 3 대 속성
* 캡슐화/ 상속/ 다형성
* 
* 위의 정보를 클래스라는 키워드로 묶는다고 해봅시다. 
* 
* class sonGov{
* char[] ssn;
* char name [20];
* char address[50]; 
* };
* 이렇게 클래스를 열고 단순화된 정보를 넣고 닫는 것을 '캡슐화'라고 한다. 
* 클래스 키워드로 묶으면 어떤 일이 생길까?
* 
* 
*/




# include <iostream>
# include<string>
using namespace std;

class Son {
public:
	int no;
	string name;
	string address;
	int pNum;
		
		
};
/*
* 이러면 새로운 데이터 타입을 만든 것이라고 컴퓨터는 인지
* 근데 클래스 데이터 타입으로 만든 변수를 객체라고 한다. 
* 
* Object(대상 객체)는 추상화를 통해 만들어지고 instance화를 해서 object(객체)를 만든다. 
*/

class SonSoccer {
public:
	int position;
	int skill;
	int health;
	int strength;
	int speed;

};

class AnimalPig {
	string name;
	int age;
	string location;
	int price;

public:
		AnimalPig() {

		}

		AnimalPig(string _name, int _age, string _location, int _price) {
			name = _name;
			age = _age;
			location = _location;
			price = _price;
		}
	
		string getName() {
			return name;
		}
		int getAge() {
			return age;
		}

		string getLocation() {
			return location;
		}

		int getPrice() {
			return price;
		}



		void growl() {
			cout << "꾸엑꾸이엑" << endl;
		}

		void info() {
			cout << "name = " << name << endl;
			cout << "age = " << age << endl;
			cout << "price = " << price << endl;
		}
		~AnimalPig() {
			cout << "Pig 소멸자" << endl;
			// 소멸자 객체를 닫는다. 재미있는 점은 클래스 내부에 쓰는 것
		}
};



class AnimalChicken {
	
	string name;  // 맴버 변수
	int age;
	string location;
	int price;
	string health;
public:

		AnimalChicken(string value) {
			health = value;
		}
		string getHealth() {
			return health;
		}

		string getName() {
		
			return name;
		}
		string getLocation() {
			return location;
		}
		int getAge() {
			return age;
		}
		int getPrice() {
			return price;
		}

		void setName(string value) {
			name = value;
		}
		void setLocation(string value) {
			location = value;
		}
		void setAge(int value) {
			if(age<100){
				age = value;
			}
		}
		void setPrice(int value) {
			if (value > 8500 && value < 10000) {
				price = value;
			}
					
		}
		void growl() {  //멤버 함수
			cout << "꼬꼬고곡꼭" << endl;
		}
};

class AnimalCow {
public: // 접근제어자(접근제한자)
	string name;
	int age;
	string location;
	int price;
	
		void growl() {
			cout << "음우으우에웨이" << endl;
		}
};



//클래스 안에는
//속성을 담당하는 멤버 변수
//움직임을 담당하는 멤버 함수
//
//캡슐화??? > 우리가 필요한 정보만 추상화해서 새로운 데이터 타입을 만든건데
//클래스를 객체화해서 메모리에 할당했을 때 그 객체는 하나의 인스턴스이다. 
// 캡슐화의 기본 정책은 ...? 정보 은닉 > 클래스로 묶었죠. 그리고 인스턴스의 주소를 변수로 받았고
// 접근하려면 변수에 직접접근 연산자로 접근하죠? ....> 이렇게 아예 직접 접근이 안되는 것, 변수로 우회적으로 접근하는 것.. == 캡슐화(정보 은닉)
// 

//접근제어자 : public/private/protected/ 아무것도 안쓰면 private이 기본형 (default가 없네)
// private : 외부에서 클래스 내부의 멤버에 접근하는 것을 막는다. 단, 같은 클래스 내부에서는 가능?
// protected : 상속관계에서 자식-부모간 접근은 허용
//
// 기본 접근 제어자가 private인데 캡슐화의 기본 정책은 최대한 감추는 것이다. 
// 접근제어자를 잘 쓴다면... 사용하는 사람도 뭘 써야하는지 직관적으로 알 수 있다.

// 보통 멤버 변수는 private으로 놓고 다른 필요한 것들을 public으로




/*
* 생성자 : 클래스 이름이랑 동일한 이름의 함수
* 얘도 똑같이 디폴트 생성자 자동으로 생성함 (생성자가 없으면)
*/
int main(){

	//Son b;
	//b.no = 12312;
	//b.name = "손흥민";
	//b.address = "London, England";
	//b.pNum = 12323;


	//Son c;
	//c.no = 123;
	//c.name = "손흥민2";
	//c.address = "서울";
	//c.pNum = 12311;
	//
	//
	//cout << "주민번호 : " << b.no << endl;
	//cout << "이름 : " << b.name << endl;
	//cout << "주소 : " << b.address << endl;
	//cout << "폰번호 : " << b.pNum << endl;
	//cout << endl;


	//cout << "주민번호 : " << c.no << endl;
	//cout << "이름 : " << c.name << endl;
	//cout << "주소 : " << c.address << endl;
	//cout << "폰번호 : " << c.pNum << endl;
	//cout << endl;


	/*SonSoccer a;
	a.position = 7;
	a.health = 90;
	a.skill = 90;
	a.speed = 97;
	a.strength = 84;
	cout << "등 번호 : " << a.position << endl;
	cout << "체력 : " << a.health << endl;
	cout << "스킬 : " << a.skill << endl;
	cout << "속도 : " << a.speed << endl;
	cout << "근력 : " << a.strength << endl;*/
	//////////////////////////////////////////////


	/*AnimalPig pig("꿀꿀이", 4, "런던", 30000);
			
			printf("\n\n돼지\n");
			cout << "이름 : " << pig.getName() << endl;
			cout << "나이 : " << pig.getAge()<< endl;
			cout << "서식지 : " << pig.getLocation() << endl;
			cout << "가격 : " << pig.getPrice() << endl;
			pig.growl();
		
			
			
			
	AnimalChicken chicken("건강");
		chicken.setName("꼬끼오");
		chicken.setAge(6);
		chicken.setLocation("닭장");
		chicken.setPrice(9500);

			printf("\n\n닭\n");
			cout << "이름 : " << chicken.getName() << endl;
			cout << "나이 : " << chicken.getAge() << endl;
			cout << "서식지 : " << chicken.getLocation() << endl;
			cout << "가격 : " << chicken.getPrice() << endl;
			cout << "건강 : " << chicken.getHealth() << endl;
			chicken.growl();

	AnimalCow cow;
		cow.name = "음메";
		cow.age = 299;
		cow.location = "목장";
		cow.price = 40000;
			
			
			printf("\n\n소\n");
			cout << "이름 : " << cow.name << endl;
			cout << "나이 : " << cow.age << endl;
			cout << "서식지 : " << cow.location << endl;
			cout << "가격 : " << cow.price << endl;
				cow.growl();*/




		AnimalPig  pig("돼랑이", 4, "대전", 3000);
		pig.info();
	
		AnimalPig pig2("돼순이", 5, "서울", 20000);
		pig2.info();

	return 0;
}

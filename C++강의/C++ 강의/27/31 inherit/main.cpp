#include <iostream>
using namespace std
;

class A{
private:
    int _health;
    
public:
    
    A(int health) : _health(health) {
        cout<< "A의 생성자 " <<  endl;
    }
    
    ~A() {
        cout<< "A의 소멸자 " <<  endl;
    }
    
    void speack(){
        cout<<"A"<<endl;
        
    }
};


// : public A 가 extends A랑 같다.
class B : public A {
private:
    int _attack;
//    C value;
    //포함관계  > 포함도 두 가지로 나뉜다....
    
    
public:
    B(int health, int attack ) : _attack(attack), A(health){
        cout<< "B의 생성자 " <<  endl;
    }
  
    
    ~B(){
        cout<< "B의 소멸자 " <<  endl;
    }
    
};

class C {
    
    
};


int main()  {
    B obj(20,30);
    
    return 0;
}
//A의 생성자
//B의 생성자
//B의 소멸자
//A의 소멸자
//순서가 생성은 부모 - 자식
// 소멸은 자식 - 부모 순이네
// 이걸 알면 어떻게 쓰일까??? 갑자기 궁금하네 근데 중요한 내용일거라는 생각은 솔직히 하고 있긴한데
// C++로 객체 지향 프로그래밍에 대한 개념??
// 다른 객체 지향 배울 떄 쉽게 배울수 있긴하지
// 다른 OOP 보다 어려운 편이지...




// 오늘까지 캡슐화에 대해서 배운건데... 저번 + 오늘 수업 한 번에 리뷰하고 캡슐화에 대해서 다시 한 번 생각 해볼 필요가 있어

// 상속은 어떤 클래스의 기능을 가져와서 마치 자기 것인양 쓰는 것이다.
// 상속 : 객체 간 관계를 맺는 방법
// 계층 구조로 맺으면 상속이라고 한다.
// 어떤 객체가 다른 객체를 멤버로 가지고 있으면 포함이라고 한다.






// 상속관계에 있는 대상을 클래스를 만들어서 상속시켜서 만들어오기


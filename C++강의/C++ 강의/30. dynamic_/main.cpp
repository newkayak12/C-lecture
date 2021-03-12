
//  main.cpp
  //27
//
////  Created by Sang Hyeon kim on 2021/02/20.
////
//
#include <iostream>
using namespace  std;
//

class Monster {
    private:   // 속성 담당하는 부분을 멤버변수
        int _health;
        int _attack;
        int _defense;
public:
        static int _count;// 정적 멤버 변수, 클래스 변수 (객체에 속하지 않고 클래스에 속해 있기 때문에
    
    
    public :
    Monster(){}
    Monster(int health, int attack, int defense)
    : _health(health), _attack(attack), _defense(defense){}
        void attack(){ // 행동을 담당하고 있느 부분 멤버 함수 (메서드 멤버 함수 이름만 다른 것
           // 여튼 다시 말하면 함수 자체는 객체에 포함되어 있지 않다. 그리고 this 포인터로 각 객체를 참조)
            
        }
    
        void defense()  {

        }

   static void info() {
        cout<< "객체의 갯수는 : " << _count << endl;
     //  _count가 static아니라면 인스턴스화 이전에 info가 생성되는데, 여튼 그거 알잖아 그 개념 그거야 static에 그냥 필드 놓으면 나오는 거
    }

    void healthinfo()   {
        cout<< "생명력은 : " <<_health << endl;
        cout<< "생명력은 : " <<this -> _health << endl;
      //  위와 같이 this가 숨어 있는 것 > 자기 참조형 포인터 / who am i 포인터
    }
};


int main() {
    Monster a(10, 20, 30); //자동변수, 로컬변수
   // 값을 가지고 접근하면
    a.info();

    Monster* pm = new Monster(10, 20, 30);//  애는 new로 주소값을 반환하니까 포인터형으로 받은거지
   // 주소 값을 가지고 접근하면 화살표 연산자로
    pm->info();  // 이게 찐람다 느낌이네 ㅋㅋ

   // 그리고 동적으로 만들면 무조건 delete로 날려야해 꼭

    delete pm;



    return 0;
};

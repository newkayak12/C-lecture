//
//  main.cpp
//  27
//
//  Created by Sang Hyeon kim on 2021/02/20.
//

#include <iostream>
using namespace std;

class monster {
    private:    //속성 담당하는 부분을 멤버변수
        int _health;
        int _attack;
        int _defense;
public:
        static int _count; //정적 멤버 변수, 클래스 변수 (객체에 속하지 않고 클래스에 속해 있기 때문에
    
    
    public :
    monster(){}
    monster(int health, int attack, int defense)
    : _health(health), _attack(attack), _defense(defense){}
        void attack(){  //행동을 담당하고 있느 부분 멤버 함수 (메서드 멤버 함수 이름만 다른 것
            //여튼 다시 말하면 함수 자체는 객체에 포함되어 있지 않다. 그리고 this 포인터로 각 객체를 참조)
            
        }
    
        void defense()  {
            
        }
    
   static void info() {
        cout<< "객체의 갯수는 : " << _count << endl;
       //_count가 static아니라면 인스턴스화 이전에 info가 생성되는데, 여튼 그거 알잖아 그 개념 그거야 static에 그냥 필드 놓으면 나오는 거
    }
    
    void healthinfo()   {
        cout<< "생명력은 : " <<_health << endl;
        //cout<< "생명력은 : " <<this -> _health << endl;
        //위와 같이 this가 숨어 있는 것 > 자기 참조형 포인터 / who am i 포인터
    }
};

//"int monster :: _count = 0;" //(접근 연산자 같은 느낌인가 보네)


//int main() {
//
//    monster a(10,20,30);
//        a.info();
//
//    monster b(20,30,40);
//        b.info();
//
//    monster::_count =20;
//        a.info ();
//
//




//    monster:      //:info(); //static 이니까 :: 으로 바로 접근 할 수 있다.  그니까  monster().info(); 이런 느낌인거지
////    이러면 얘네들이 클래스에 붙어서 바로 접근이 가능하다.
//    return  0;
//
//
////    함수는 클래스 영역에 하나만 만들어져 있다. 객체와 같이 생성되는 것이 아니라.
//
//};

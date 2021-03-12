//
//  main.cpp
//  27
//
//  Created by Sang Hyeon kim on 2021/02/20.
//

#include <iostream>
using namespace std;


class Monster{
    
    enum {
        NORTH,
        SOUTH,
        EAST,
        WEST,
        //값을 따로 지정 안 해주면 north부터 0,1,2,3으로 매핑됨
//        그래서 switch에서 쓰면 됨 만약 NORTH =10이면 SOUTH는 11이 되는 등
    };
    
    
private:
    int power;
    int defense;
    int speed;
    int _direction;
    
    const int MAX = 200; //final static > 상수가 되고, 변경할 수는 없다. 그러나 이렇게 사용하면 값을 확정지어 버리는 것이 되어버림
    const int MIN = 0;
    //열거형을 안쓰면 얘로 switch를 돌리면 된다.(NORTH = 0; 이렇게)
    
    //주로 ' _ ' 언더바 나 'm' 을 멤버 변수 앞에 쓴다.
    //그냥은 일반 변수로 사용한다.
    
public:
    Monster(){
        
    }
    
    Monster(int _power, int _defense, int _speed){
        power = _power;
        defense = _defense;
        speed = _speed;
    }
    
    void init( int _power, int _defense, int _speed){
        power = _power;
        defense = _defense;
        speed = _speed;
    }
    
    void info(){
        cout << "파워 : " << power<< endl;
        cout << "디펜스 : " << defense << endl;
        cout << "스피드 : " <<speed <<"\n"<< endl;
    }
    
    void update() {
        
        
        switch(_direction){
            case NORTH: //북 > 주석을 달지 않았다면 0은 굉장히 다양한 의미로 사용할 수 있지??? 이러한 숫자를 매직넘버라고 한다.
//                        그래서 저렇게 숫자로 쓰지 말라고 하네?
                break;
                
            case SOUTH: //남
                
                break;
                
            case WEST: //서
                
                break;
                
            case EAST: //동
                
                break;
        }
    }
};


void change(/*const*/ int & ref) {
    //이러면 ref가 만들어지지 않고 바로 던져넣어서 공간 생성 X 그냥 매개변수로 접근할 수 있는 참조형이 하나 생겨서 바로 접근하게 하는 것
    ref =50;
    //const를 저렇게 쓰면 안에서 값을 변경할 수 없음 사용은 가능;
    
}


//
//int main (){
//  
//    Monster a(10,20,30);
//    Monster array[10];
//    //객체배열의 객체를 init 으로 촏기화하고
////  info로 출력
//    for( int i = 0; i<10; i++){
////        cin>> _power;
////        cin>> _defense;
////        cin>> _speed;
//        
//        array[i].init(20*i, 30*i, 40*i);
////        array[i] = new Monster(20, 30, 40);
//
//    }
//    
//    
//    for(int i =0 ; i<10; i++ ){
//        array[i].info();
//    }
//    
//    
//    
//    
//    //참조형
//    int a1 =20;
//    int & ref_a1 = a1;
//    
//    change(a1);
//    
//    
//    return 0;
//};



//여기까지가 객체를 만드는 것 자체에 대한 것


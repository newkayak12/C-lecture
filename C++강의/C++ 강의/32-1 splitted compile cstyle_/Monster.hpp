#pragma once
#include <iostream>
using namespace std;

//헤더에 선언부만 남겨 놓고/

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
    
    Monster(int _power, int _defense, int _speed)
    : power(_power), defense(_defense), speed(_speed){
        
    }
    void init( int _power, int _defense, int _speed);
    
    void info();
    void update();
};

#include <iostream>
#include "Monster.hpp"
using namespace std;

// 구현부에 구체화를 시키는데 얘가 못알아 먹을 수 있으니까 아예 함수에 Monster::으로 못 박고


    
    void Monster::init( int _power, int _defense, int _speed){
        power = _power;
        defense = _defense;
        speed = _speed;
    }
    
    void Monster::info(){
        cout << "파워 : " << power<< endl;
        cout << "디펜스 : " << defense << endl;
        cout << "스피드 : " <<speed <<"\n"<< endl;
    }
    
    void Monster::update() {
        
        
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


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
    
    
public:
    B(int health, int attack ) : _attack(attack), A(health){
        cout<< "B의 생성자 " <<  endl;
    }
  
    
    ~B(){
        cout<< "B의 소멸자 " <<  endl;
    }
    
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


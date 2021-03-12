//
//  main.cpp
//  27
//
//  Created by Sang Hyeon kim on 2021/02/20.
//

#include <iostream>
using namespace std;


class DynamicArray{
private:
    int * _arr;
    int _size;
    
public:
    DynamicArray(int size)  {
        _arr = new int[size];
        _size = size;
    }
    
    DynamicArray(DynamicArray &ref){ //복사 생성자
        _size = ref._size;
        _arr = new int[_size];
        
        for( int i =0; i<_size; i++ ){
            _arr[i]  = ref._arr[i];
        }
// int * _arr; 처럼 포인터로 공간을 가리키고 있으면 따로 복사 생성자를 만드는게 맞다.
    }
    ~DynamicArray() {
        delete[] _arr;
        
    }
    //생성자와 소멸자 항상 세트(gc가 없으니까 그대로 메모리 누수로 이어진다.)
    
    
    
    int getIndex(int index) {
        return _arr[index];
    }
    int getSize(){
        return _size;
    }
   
    void setIndex(int index, int value ){
        _arr[index] = value;
    }
   
                 
};


class Point {
private :
    int _x;
    int _y;

public:
    Point(int x, int y) : _x(x), _y(y){}
   
    void info(){
        cout<<"x의 값"<<_x<<endl;
        cout<<"y의 값"<<_y<<endl;
    };
    
    void setX(int x ){
        _x = x;
    };
//  이렇게 단순핟게 주소 값 참조가 아닌 경우는 굳이 복사 생성자를 만들어주지 않아도 된다.

    
};

//
inline void print() {
    cout<< "안녕하세요"<<endl;
};


//인라인 함수??? inline이라는 키워드를 넣어서 사용하는 함수이다. 예를들어
//함수를 우리가 호출한다는 것은
//될수 있으면 inline으로 만들어달라는 거고
//그러면 코드 내용을 그냥 main에 박아버리는 것과 같아... 그러면 주소 이동이 적어져서 시간이 빨라지겠지?

//이러면 가독성과 재사용성이 올라간다. 


//
//int main() {
//    DynamicArray a (10);
//    
//    
//    
//        for(int i =0; i< a.getSize(); i++)  {
//            a.setIndex(i, i*2  );
//        }
//        
//        for(int i =0; i<a.getSize(); i++ ){
//            cout<<i<<"="<<a.getIndex(i)<<endl;
//        }
//        
//    DynamicArray b (a); //복사 생성자
//    
//        for( int i =0; i<b.getSize(); i++ ){
//            cout<< "b객체의 배열 값 : "<< b.getIndex(i)<<endl;
//    //        printf( " %d 는 배열의 인덱스 %d 에 있는 값\n", b.getIndex(i), i);
//        }
//    
////
////    Point c (10,20);
////    Point d (c);
////
////    c.info();
////    d.info();
////    c.setX(30);
////    d.info();
////
//
//   
//    return 0;
//};

//*******
//변수?? 값을 저장하는 공간
//변수의 존속 기간과 접근 범위가 달라진다.
//
//eg

//****************************************//int global =0; // 외부변수, 전역변수  > 프로그램이 가동하는 내내 살아 있는 변수
// 심지어 다른 cpp파일에 있어도 접근이 가능하다.


//int add(int a, int b){
//**************************************// int a; // 로컬 변수 , 자동 변수
//**************************************//  static in score = 0;


//  이러면 로컬 변수는 맞는데, 함수 시작하면 생성되고 프로그램이 종료하면 없어진다.
//  특별히 이런애들을 로컬 번수, 정적변수라고 한다.
    
// int global 같은 애들은 이미 컴파일시부터 공간이 할당된건데
//  ms워드를 생각해보면 램에 올라가지 근데 작성하면 지속적으로 램에 할당되는 공간의 양이 달라질거 아냐
//  이런 애들은 동적변수 > C++은 new 라는 녀석을 통해서 생성

//  new int [100]; > 이러면 heap에 400바이트 짜리 공간을 만든다. 동적으로 만들고 주소 값을 리턴
//  얘의 주소는 누가 받아??


//int *p = new int[100]; 이렇게 된다.
//p[0] =1;
//p[1] =2;
// 다 썼다면  delete[] p; 로 반환해줘야한다 그렇지 않으면 컴퓨터를 껐다 켜기 전에는 그대로 누수가 된다.


//만약 객체를 만든다고 하면
//*****************************************//Monster *pp = new Monster();
//다 쓰고
// delete pp;


//**> 변수를 선언할 숭 ㅣㅆ는 방법 4가지

//}




// 복사 생성자
// a에서 arr을 생성하고 주소 값을 받아서 2000이라고 하자
// b에서 그냥 a를 받으면  arr주소 값을 같은 곳을 참조한다.
// 문제는 a를 다 사용하고 소멸자를 돌려버리면 2000이라는 주소 값에 있는 배열도 날아가겠지
// 그럼 b객체 입장에서는 당황스럽겠지

// 그래서 복사 생성자를 만든다. 23번쨰 줄을 보면 여기는 아예 이런 걸 한다?


//

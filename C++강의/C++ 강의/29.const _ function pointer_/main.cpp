//
//  main.cpp
//  27
//
//  Created by Sang Hyeon kim on 2021/02/20.
//

#include <iostream>
using namespace std;


//const


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
    void print(){
        cout << "안녕" << endl;
    }
    
    
    int getIndex(int index) {
        return _arr[index];
    }
    int getSize(){
        return _size;
    }
   
    void setIndex(int index, int value ){
        _arr[index] = value;
    }
   
    void print () const  {
        cout <<"값" << _size << endl;
       
    }
                 
};

//void add(const DynamicArray & ref){
//    ref.print();
//};


//add 안에 있는 객체의 값을 변경하지 않는다. > 상수성을 띤다.
//그럼 어떤 함수만 호출할 수 있는가? const가 붙으면 멤버 변수를 변경하지 않는 것만 받을 수 있다.

int add(int a, int b){
    return a+b;
}
//얘도 메모리상에 위치를 갖고 있고 그 안에 이진수가 명령으로 쓰이는 것이다.
// 물론 얘도 주소 값을 가지고 있다.
// 그래서 함수 포인터를 사용해서 그 함수의 주소 값을 기록한다.
//그러면 아래와 같은 pfunc가 add의 주소값을 기록하고 있고 그 변수를 함수처럼 사용하면 된다.

// 이렇게 함수를 사용하면 함수를 매개변수로 전달할 수 있다 ㅋㅋㅋㅋㅋㅋ 뭐냐 이거

int calculate(int(*pfunc) (int, int), int a, int b){
    return pfunc(a,b);
}
//이렇게 던져주면 아래에서 포인터만 바꿔 끼우면 게임이 달라지겠지

int game(void (* role) (), int data){
    
    return 0;
}
//얘는 오목판을 그려준다고 하면

void omok(){
    
};
void baduk(){
    
};





int sub (int a, int b){
    return a-b;
}

int mul (int a, int b){
    return a*b;
}


//int main()  {
//    int (*pfunc) (int, int); // 함수 포인터
//    pfunc = add;
//
//
//    cout<< "pointer function "<<pfunc(20,30) << endl;
//
//    cout<< calculate(add, 20, 30)<<endl;
//
//
//    int oper =0;
//    int (*pcalc[3]) (int, int); // 함수 포인터 배열 ㅋㅋㅋㅋㅋ
//    //설마 이거 갖고 calculator에 넣고 돌려서 마치 다형성 같이 구현한다고?
//    pcalc[0] = add;
//    pcalc[1] = sub;
//    pcalc[2] = mul;
//
//    int a = 20;
//    int b = 30;
//    cin >> oper;
//
//
//    cout << pcalc[oper](a,b)<<endl;
//
//    return 0;
    
    // cs : code seg > 명령 (여기 이진수는 명령어로)
    // ds : data seg > 데이터 > 프로그램이 종료될 때 사라짐
    // heap > 데이터 > 동적변수가 들어감
    // ss : stack seg > 데이터 > 자동변수는 여기
    
    
    
    //너무 복잡해서 클래스 내부에 있는 애들은 안씀
    
    
//};

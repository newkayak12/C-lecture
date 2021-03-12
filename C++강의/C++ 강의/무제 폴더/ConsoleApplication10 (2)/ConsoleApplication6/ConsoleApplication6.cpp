

#include <iostream>
using namespace std;

// 예외 처리 
// 예외 vs 에러
// : 대비할 수 있는 것(로직에서의 문제)  vs 대비할 수 없는 것(시스템 차원에서의 문제)


//시간이 없으니..
class DynamicArray {
private:
	int* _arr;
	int _size;

public:

	DynamicArray(int size) : _size(size) {
		_arr = new int[size];
	}

	~DynamicArray() {
		delete[] _arr;

	}
	int& operator[](int index) {
		return _arr[index];
	}

	int getIndex(int index) {
		return _arr[index];
	}

	void setIndex(int index, int value) {
		_arr[index] = value;
	}
	// index가 범위 밖으로 벗어나면 어떻게 할지??
	int getSize() {
		return _size;
	}

	DynamicArray& operator=(DynamicArray &ref) {
		delete[] _arr;
		_size = ref._size;
		_arr = new int[_size];

		for (int i = 0; i < _size; i++) {
			_arr[i] = ref._arr[i];
		}
		return *this;
	}
	

};
// 예상되는 상황을 통제하는 것 : 예외 처리
// 예외처리를 하는 이유는?? 프로그램이 비정상 종료가 되지 않게 하려고
/// 남발하면 느려지겠지?? 
//trade off... 양립할 수 없는 두 개념을 의미(eg 속도가 빠르면서 안정적인 것) _ 이런 시소같은 관계를 trade off라고 한다.

// 예외처리를 해야할 떄, 하지 말아야할 때를 잘 알아야한다. (적당함) _ 진짜 크리티컬한 부분에 달아줘야함 

//또한 필요성에 따라.. 용도에 따라서 해줘야한다.

// try ~ catch ... > 당연히 예외 이름은 다르겠지만 사실 거기서 거기일 듯?

float divide(int a, int b) {
	if (b == 0) {
		throw "Divide Zero";
	} 
	
	return a / (float)b;

}

void func2() {
	divide(10,0);
	cout << "func2" << endl;
}

void func3() {
	func2();
	cout << "func3" << endl;
}
int main()
{
	try {
		divide(10, 0);

	}
	catch (const char* ex) {
		cout << ex << endl;
		//const char* 는 divide zero 를 받기 위해서
	}

	// 이렇게 구조는 같고.... catch 안에서는 조금 다르네??
}
//throw하면 무조건 어디서든 받아야함

// stack 풀기 > throw를 만나면 그냥 쭉 무시해버리는 


#include <iostream>
using namespace std;


class DynamicArray {
private :
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
	//& : 참조형

};

class Adder{
public:
	int operator()(int a, int b) {
		return a + b;
	}

	float operator()(float a, float b){
		return a + b;
	}
};



class Multiply {
public:
	int operator()(int a, int b) {
		return a * b;
	}

	float operator()(float a, float b) {
		return a * b;
	}
};
int main() {



	DynamicArray array(10);

		//for (int i = 0; i < array.getSize(); i++) {
		////	array.setIndex(i, i * 2);
		//	array[i] = i * 2;

		//}

		//for (int i = 0; i < array.getSize(); i++) {
		////	cout << "array[" << i << "] = " << array.getIndex(i) << endl;
		//	cout << "array[" << i << "] = " << array[i] << endl;


		//}

		DynamicArray array2(20);


		for (int i = 0; i < array2.getSize(); i++) {
			array2[i] = i * 2;
		}

		    array = array2; // 언제나 대입연산을 해준다는 거에서 문제가 생긴다고??  >>> 기존의 배열이 메모리에 올라가 있는데 쓸 수 없는 애로 전락해버리고(Dangly point), 
							//a,b가 배열은 같이 써버려서 a에서 바꾸면 b에서도 바뀜 더 나아가서 B가 사라진 상태에서 A에 값을 넣으면 장담 못함...
							// 이런 경우에 대입 연산을 오버로드해야함...(와... 진짜 ㅋㅋㅋ 

		// 연사자 오버로드에서 operator= 로 썼잖아.. =를 오버로드하겠다는 의미지

		DynamicArray array3(10);

		//array3 = array = array2; // 이렇게 쓸 수 있습니다. (C++은)



		cout << "array2[10] = " << array2[10] << endl;

		array[10] = 60;

		cout << "array2[10] = " << array2[10] << endl;

		cout << "array[10] = " << array[10] << endl;


	//	Adder adder;
	//	cout << adder(10, 20) << endl; // functor .. 객체를 함수처럼 사용하기 위한...

		//adder.operator()(10, 20); == adder(10,20)

		

	//	Multiply mul;
	//	cout << mul(10, 20) << endl;


	return 0;
};
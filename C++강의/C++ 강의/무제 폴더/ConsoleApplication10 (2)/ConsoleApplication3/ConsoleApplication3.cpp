

#include <iostream>
using namespace std;


// 그냥 제네릭이네 ㅋㅋ
template <typename T>
class DynamicArray {
private:
	T* _arr;
	T _size;


public:

	DynamicArray(T size) : _size(size) {
		_arr = new T[size];
	}

	~DynamicArray() {
		delete[] _arr;

	}
	T& operator[](T index) {
		return _arr[index];
	}

	T getIndex(T index) {
		return _arr[index];
	}

	void setIndex(T index, T value) {
		_arr[index] = value;
	}

	T getSize() {
		return _size;
	}

	DynamicArray& operator=(DynamicArray &ref) {
		delete[] _arr;
		_size = ref._size;
		_arr = new T[_size];

		for (T i = 0; i < _size; i++) {
			_arr[i] = ref._arr[i];
		}
		return *this;




	}

/*
	void showArray() {
		for (int i = 0; i < _size; i++) {
			cout << "array[" << i << "] = " << array[i] << endl;
		}
	}
	*/

};
// int 형이 아니라 float형 dynamic array가 필요하다면 어떻게 해야하나?
// 위의 녀석을 다 뜯어 고쳐야하는가?
// 흠.. 참.. 그런 것을 해주는 기능이 있어요... 템플릿이라는


// 다양한 테이터 타입에 적응할 수 이쓴 ㄴ범용적인 클래스를 만들어 줄 수가 없었는데 범용적인 클래스 라이브러리가 제공되었다.
// 범용 라이브러리를 잘 찾아서 쓰면 되는 환경으로 바뀌고 있다.
class Point {
private:
	int _x;
	int _y;
public:
	Point(int x, int y) : _x(x), _y(y) {

	}

	Point(int i): _x(i), _y(0) {

	}
};



//클래스 템플릿 특수화
//Template <>
//class DynamicArray<Point> {
//private:
//	Point* _arr;
//	int _size;
//
//public:
//
//	DynamicArray(int size) : _size(size) {
//		_arr = new Point[size];
//	}
//
//	~DynamicArray() {
//		delete[] _arr;
//
//	}
//	int& operator[](int index) {
//		return _arr[index];
//	}
//
//	int getIndex(int index) {
//		return _arr[index];
//	}
//
//	void setIndex(int index, int value) {
//		_arr[index] = value;
//	}
//
//	int getSize() {
//		return _size;
//	}
//
//	DynamicArray& operator=(DynamicArray &ref) {
//		delete[] _arr;
//		_size = ref._size;
//		_arr = new int[_size];
//
//		for (int i = 0; i < _size; i++) {
//			_arr[i] = ref._arr[i];
//		}
//		return *this;
//	}
//	//& : 참조형
//
//};

// 함수 템플릿도 있다.




int add(int a, int b) {
	return a + b;

	// 또 데이터 타입별로 해야하냐??
}

template  <typename T>
T add(T a, T b) {
	return a + b;
}


/*template <>
float add<double>(float a, float b) {

	return a + b;
}

// 함수 특수화
*/



//STL > STANDARD TEMPLATE LIBRARY

int main()
{


	/*
	DynamicArray<int> array(20);

		for (int i = 0; i < array.getSize(); i++) {
			array.setIndex(i, i * 2);
		}
		array.showArray();

	//DynamicArray<double> array2(20);
	//DynamicArray<Point> array3(30);
 // */

	cout << add(10, 20) << endl;
	cout << add(1.2f, 4.2f) << endl;




	return 0;
}

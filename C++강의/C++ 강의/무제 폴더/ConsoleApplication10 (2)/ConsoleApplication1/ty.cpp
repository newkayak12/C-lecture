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
	//& : ������

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

		    array = array2; // ������ ���Կ����� ���شٴ� �ſ��� ������ ����ٰ�??  >>> ������ �迭�� �޸𸮿� �ö� �ִµ� �� �� ���� �ַ� �����ع�����(Dangly point), 
							//a,b�� �迭�� ���� ������� a���� �ٲٸ� b������ �ٲ� �� ���ư��� B�� ����� ���¿��� A�� ���� ������ ��� ����...
							// �̷� ��쿡 ���� ������ �����ε��ؾ���...(��... ��¥ ������ 

		// ������ �����ε忡�� operator= �� ���ݾ�.. =�� �����ε��ϰڴٴ� �ǹ���

		DynamicArray array3(10);

		//array3 = array = array2; // �̷��� �� �� �ֽ��ϴ�. (C++��)



		cout << "array2[10] = " << array2[10] << endl;

		array[10] = 60;

		cout << "array2[10] = " << array2[10] << endl;

		cout << "array[10] = " << array[10] << endl;


	//	Adder adder;
	//	cout << adder(10, 20) << endl; // functor .. ��ü�� �Լ�ó�� ����ϱ� ����...

		//adder.operator()(10, 20); == adder(10,20)

		

	//	Multiply mul;
	//	cout << mul(10, 20) << endl;


	return 0;
};
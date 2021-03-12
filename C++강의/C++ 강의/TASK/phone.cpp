
#include<iostream>
#include "phone.h"
using namespace std;






void Phone::init(string model, string brand, int storage) {
	_model = model;
	_brand = brand;
	_storage = storage;

};


void Phone::info() {
	cout << "모델명 " << _model << "브랜드" << _brand << "용량" << _storage << endl;
};


#include<iostream>
#include "phone.h"
using namespace std;






void Phone::init(string model, string brand, int storage) {
	_model = model;
	_brand = brand;
	_storage = storage;

};


void Phone::info() {
	cout << "�𵨸� " << _model << "�귣��" << _brand << "�뷮" << _storage << endl;
};

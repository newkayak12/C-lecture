#pragma once

#include<iostream>
using namespace std;




class Phone {
private:

	string _model;
	string _brand;
	int _storage;

public:

	Phone() {

	}

	Phone(string model, string brand, int storage) 
	: _model(model), _brand(brand), _storage(storage) {

	}


	void init(string model, string brand, int storage);


	void info();


};

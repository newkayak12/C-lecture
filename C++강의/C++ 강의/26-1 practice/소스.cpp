#include <iostream>
using namespace std;
class Humidifier {

	string productType, name;
	int price;

public:
	Humidifier() {

	}

	Humidifier(string _productName, string _name, int _price) {
		productType = _productName;
		name = _name;
		price = _price;
	}

	void info() {
		cout << "제품 종류	: " << productType << endl;
		cout << "제품 이름	: " << name << endl;
		cout << "제품 가격	: " << price << endl;

	}

	void setProductType(string _productType) {
		productType = _productType;

	}

	void setName(string _name) {
		name = _name;

	}

	void setPrice(int _price) {
		price = _price;
	}

	string getProductType() {
		return productType;
	}

	string getName() {
		return name;
	}

	int getPrice() {
		return price;
	}
	~Humidifier() {
	}

};


class Watch {

	string name, brand;
	int price;

public:

	Watch() {

	}
	Watch(string _name, string _brand, int _price) {
		name = _name;
		brand = _brand;
		price = _price;
	}

	void setName(string _name) {
		name = _name;
	}
	void setBrand(string _brand) {
		brand = _brand;
	}
	void setPrice(int _price) {
		price = _price;
	}

	string getName() {
		return name;
	}

	string getBrand() {
		return brand;
	}
	int getPrice() {
		return price;
	}


	void info() {
		cout <<"이름 : " << name << endl;
		cout <<"브랜드 : " << brand << endl;
		cout <<"가격 : " << price << endl;

	}
	~Watch() {

	}
};


class Wifi {
	string brand, name;
	int price;

public:
	Wifi() {

	}
	Wifi(string _brand, string _name, int _price) {
		brand = _brand;
		name = _name;
		price = _price;
	}

	string getBrand() {
		return brand;
	}

	string getName() {
		return name;

	}

	int getPrice() {
		return price;
	}

	void setBrand(string _brand) {
		brand = _brand;

	}

	void setName(string _name) {
		name = _name;

	}

	void setPrice(int _price) {
		price = _price;
	}

	void info() {
		cout <<"이름 : " << name << endl;
		cout <<"브랜드 : " << brand << endl;
		cout <<"가격 : " << price << endl;
	}

	~Wifi()	{

	}
};





void main() {
	Humidifier humi ("가습기","다이소",5000);
	humi.info();
	printf("\n");

	Watch watch("apple watch", "apple", 500000);
	watch.info();
	printf("\n");
	
	Wifi wifi("N604R", "iptime", 30000);
	wifi.info();
	printf("\n");
}
//�ٽ� �����ϴ� Ÿ�̹�!

//���α׷��� > ����/������/�Լ�/��� �������� �Ƽž� �ؿ�
//���� > ��ǻ�� ���α׷��� �� ���� ������ ��ǻ������ ���� ��Ű���� �ϴ°���?
//        �� ��ǻ������ ���� ��Ű����? ���� ������ �Ҵ��� ��Ű�� �ϰ��� �������
//        �� �ϰ��� ����ִ� ���� ��������
//		  �� ���� 20�� 30�� ���϶�� ���� ��Ű�� �;�� �׷��� 20, 30�� ��ǻ������ �����ؾ����� �� �� ������ ����ϴ�.��
				//int a = 20;
				//int b = 30;


//Cpu / ram / hdd / monitor / speaker/keyboard / mouse / ����� ����?
/*CPU = ���� ��ġ : ��� ���
Ram = ���� ��ġ : �ӵ��� �����
hdd = ���� ��ġ : �ӵ��� ������ CPU����.. �׷��� ��������� �ӵ��� ���� ram���� �ѱ��(Buffer����) �� ������ CPU�� �ѱ�ٰ��
����  �̷��� ��ġ���� �̿��ؼ� �Է��ϰ� ����ϰ� ����ϴ�*/



/*
*  ������ ����� Ram�� ������ �Ҵ�Ǵµ� ���⼭ int a= 20; �� �ִ� a�� ����  �����Ѵٰ��
* �׸��� int a; �̷��� ���� ������ ������ ����ϴ�.
* 
* 
* 
*        �⺻����
* 
*  ������ : �ڿ���(���� ����)/ 0/ ���� ���� eg)-1, 0, 1 ��..  // int, short long (unsigne��� Ű���带 ���̸� 0/ ���� ������ ���)
*				eg) unsigned long �� ����� �� ����� �޶��
*			: int a; (���⼭ int�� ������ Ÿ���̶�� �ϰ� �޸� ������ �Ҵ��� ũ�⸦ �� �� �־�� �׸��� �� ���� ������ ���� ������ ����ϴ� �ſ���) > 4����Ʈ¥�� ���� ���� ����
*			: a���� �� ���� ������ �Ҵ�� ���� ����ȴٰ��	   
*			:  
*				
*  �Ǽ��� : 
*  ������ : ��ǻ�͸� �̱����� ���� �� 127���� ���ڸ� ���� �ߴ�. ASCII�ڵ��� �Ѵ�
*		  :  8��Ʈ�� ��������� 7��Ʈ ���� ���� > char���̴�. 
*  boolean : ��/ ����(0) 
* 
*  ������ > ��������� +,-,*,/,%
*		  > ���迬���� <,>,<=,>=,==,!= : �ǿ����� ���� ��� �񱳳� ������ ��
*		  > �������� &&,||,! :�ǿ������� ������ Ÿ����? bool
*		  > ���� ������  a (leftValue) = 20 (rightValue);   ������ ���� ���ʿ� �ִ´�.
* 
* 
* 
*/

int add(int a, int b) {
	int result = a + b;


	return result;
}
// �Լ��� ������ Ÿ���̴�. ���� ���� �ڵ带 ����  >> �Լ����̶�� �Ѵ�.






/*  �츮 ���� ��ü���� Ʋ
* ��ü���� ��� > �߻�ȭ(����� �̾Ƴ�) > � ����̿�? ���������� ���� �ִ� �����
*  ������ > �� �ܼ�ȭ ���׳�?? > ���� > ������ ������ ���� ������ ���� ���� > ������/���� > ���� �ʿ��� ������ �߷��� �ܼ�ȭ ��Ŵ
*  ��ü������ �̷��� �߻�ȭ ������ ����ϴ� ���α׷��� ���
*
*
*	������̶�� ��� ��ü�� ������
*	���繫�ҿ��� ����ϴ� ������� ������ ���ӿ��� ����ϴ� ������� ������ �ٸ����� (�� ��Ȳ�� ���缭 �ܼ�ȭ��Ű����)
*
* ���繫�ҿ����� �̸�/ �ּ�/ �����/ �ֹε�� ��ȣ/ ȥ�� ����/ ����ó/ ���� ���� ���..
* ���ӿ����� �̸�/ �ӷ�/ ���ӵ�/ �� ��Ȯ��/ �� ����/ ������/ ���ȣ ���
*
* ������̶�� ����� �ϳ��ε� �� �ٸ��ٰ�� �ʿ��� ������ > �� ������ �߻�ȭ �ܰ��� �Ѵ�.

* ��ü ������ 3 �� �Ӽ�
* ĸ��ȭ/ ���/ ������
* 
* ���� ������ Ŭ������� Ű����� ���´ٰ� �غ��ô�. 
* 
* class sonGov{
* char[] ssn;
* char name [20];
* char address[50]; 
* };
* �̷��� Ŭ������ ���� �ܼ�ȭ�� ������ �ְ� �ݴ� ���� 'ĸ��ȭ'��� �Ѵ�. 
* Ŭ���� Ű����� ������ � ���� �����?
* 
* 
*/




# include <iostream>
# include<string>
using namespace std;

class Son {
public:
	int no;
	string name;
	string address;
	int pNum;
		
		
};
/*
* �̷��� ���ο� ������ Ÿ���� ���� ���̶�� ��ǻ�ʹ� ����
* �ٵ� Ŭ���� ������ Ÿ������ ���� ������ ��ü��� �Ѵ�. 
* 
* Object(��� ��ü)�� �߻�ȭ�� ���� ��������� instanceȭ�� �ؼ� object(��ü)�� �����. 
*/

class SonSoccer {
public:
	int position;
	int skill;
	int health;
	int strength;
	int speed;

};

class AnimalPig {
	string name;
	int age;
	string location;
	int price;

public:
		AnimalPig() {

		}

		AnimalPig(string _name, int _age, string _location, int _price) {
			name = _name;
			age = _age;
			location = _location;
			price = _price;
		}
	
		string getName() {
			return name;
		}
		int getAge() {
			return age;
		}

		string getLocation() {
			return location;
		}

		int getPrice() {
			return price;
		}



		void growl() {
			cout << "�ٿ����̿�" << endl;
		}

		void info() {
			cout << "name = " << name << endl;
			cout << "age = " << age << endl;
			cout << "price = " << price << endl;
		}
		~AnimalPig() {
			cout << "Pig �Ҹ���" << endl;
			// �Ҹ��� ��ü�� �ݴ´�. ����ִ� ���� Ŭ���� ���ο� ���� ��
		}
};



class AnimalChicken {
	
	string name;  // �ɹ� ����
	int age;
	string location;
	int price;
	string health;
public:

		AnimalChicken(string value) {
			health = value;
		}
		string getHealth() {
			return health;
		}

		string getName() {
		
			return name;
		}
		string getLocation() {
			return location;
		}
		int getAge() {
			return age;
		}
		int getPrice() {
			return price;
		}

		void setName(string value) {
			name = value;
		}
		void setLocation(string value) {
			location = value;
		}
		void setAge(int value) {
			if(age<100){
				age = value;
			}
		}
		void setPrice(int value) {
			if (value > 8500 && value < 10000) {
				price = value;
			}
					
		}
		void growl() {  //��� �Լ�
			cout << "��������" << endl;
		}
};

class AnimalCow {
public: // ����������(����������)
	string name;
	int age;
	string location;
	int price;
	
		void growl() {
			cout << "�������쿡����" << endl;
		}
};



//Ŭ���� �ȿ���
//�Ӽ��� ����ϴ� ��� ����
//�������� ����ϴ� ��� �Լ�
//
//ĸ��ȭ??? > �츮�� �ʿ��� ������ �߻�ȭ�ؼ� ���ο� ������ Ÿ���� ����ǵ�
//Ŭ������ ��üȭ�ؼ� �޸𸮿� �Ҵ����� �� �� ��ü�� �ϳ��� �ν��Ͻ��̴�. 
// ĸ��ȭ�� �⺻ ��å�� ...? ���� ���� > Ŭ������ ������. �׸��� �ν��Ͻ��� �ּҸ� ������ �޾Ұ�
// �����Ϸ��� ������ �������� �����ڷ� ��������? ....> �̷��� �ƿ� ���� ������ �ȵǴ� ��, ������ ��ȸ������ �����ϴ� ��.. == ĸ��ȭ(���� ����)
// 

//���������� : public/private/protected/ �ƹ��͵� �Ⱦ��� private�� �⺻�� (default�� ����)
// private : �ܺο��� Ŭ���� ������ ����� �����ϴ� ���� ���´�. ��, ���� Ŭ���� ���ο����� ����?
// protected : ��Ӱ��迡�� �ڽ�-�θ� ������ ���
//
// �⺻ ���� �����ڰ� private�ε� ĸ��ȭ�� �⺻ ��å�� �ִ��� ���ߴ� ���̴�. 
// ���������ڸ� �� ���ٸ�... ����ϴ� ����� �� ����ϴ��� ���������� �� �� �ִ�.

// ���� ��� ������ private���� ���� �ٸ� �ʿ��� �͵��� public����




/*
* ������ : Ŭ���� �̸��̶� ������ �̸��� �Լ�
* �굵 �Ȱ��� ����Ʈ ������ �ڵ����� ������ (�����ڰ� ������)
*/
int main(){

	//Son b;
	//b.no = 12312;
	//b.name = "�����";
	//b.address = "London, England";
	//b.pNum = 12323;


	//Son c;
	//c.no = 123;
	//c.name = "�����2";
	//c.address = "����";
	//c.pNum = 12311;
	//
	//
	//cout << "�ֹι�ȣ : " << b.no << endl;
	//cout << "�̸� : " << b.name << endl;
	//cout << "�ּ� : " << b.address << endl;
	//cout << "����ȣ : " << b.pNum << endl;
	//cout << endl;


	//cout << "�ֹι�ȣ : " << c.no << endl;
	//cout << "�̸� : " << c.name << endl;
	//cout << "�ּ� : " << c.address << endl;
	//cout << "����ȣ : " << c.pNum << endl;
	//cout << endl;


	/*SonSoccer a;
	a.position = 7;
	a.health = 90;
	a.skill = 90;
	a.speed = 97;
	a.strength = 84;
	cout << "�� ��ȣ : " << a.position << endl;
	cout << "ü�� : " << a.health << endl;
	cout << "��ų : " << a.skill << endl;
	cout << "�ӵ� : " << a.speed << endl;
	cout << "�ٷ� : " << a.strength << endl;*/
	//////////////////////////////////////////////


	/*AnimalPig pig("�ܲ���", 4, "����", 30000);
			
			printf("\n\n����\n");
			cout << "�̸� : " << pig.getName() << endl;
			cout << "���� : " << pig.getAge()<< endl;
			cout << "������ : " << pig.getLocation() << endl;
			cout << "���� : " << pig.getPrice() << endl;
			pig.growl();
		
			
			
			
	AnimalChicken chicken("�ǰ�");
		chicken.setName("������");
		chicken.setAge(6);
		chicken.setLocation("����");
		chicken.setPrice(9500);

			printf("\n\n��\n");
			cout << "�̸� : " << chicken.getName() << endl;
			cout << "���� : " << chicken.getAge() << endl;
			cout << "������ : " << chicken.getLocation() << endl;
			cout << "���� : " << chicken.getPrice() << endl;
			cout << "�ǰ� : " << chicken.getHealth() << endl;
			chicken.growl();

	AnimalCow cow;
		cow.name = "����";
		cow.age = 299;
		cow.location = "����";
		cow.price = 40000;
			
			
			printf("\n\n��\n");
			cout << "�̸� : " << cow.name << endl;
			cout << "���� : " << cow.age << endl;
			cout << "������ : " << cow.location << endl;
			cout << "���� : " << cow.price << endl;
				cow.growl();*/




		AnimalPig  pig("�Ŷ���", 4, "����", 3000);
		pig.info();
	
		AnimalPig pig2("�ż���", 5, "����", 20000);
		pig2.info();

	return 0;
}

#include <iostream>
#include <string>
#include "Terran.h"
#include "Tank.h"

using namespace std;

Tank::Tank(string name) : Terran(name, 300, 20, 75) {

	cout << "{Tank::" << this->getName() << "] ������" << endl;

}

void Tank::move(){
	cout << "[Tank::" << this->getName() << "] " << this->getSpeed()
		<< "�� �ӵ��� �̵���" << endl;
}

void Tank::attack(){
	cout << "[Tank::" << this->getName() << "] " << this->getPower()
		<< "�� ������ ������" << endl;
}

void Tank::siegeMode(){
	cout << "[Tank::" << this->getName() << "] ������ ���� " << endl;
}


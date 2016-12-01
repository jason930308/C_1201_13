#include <iostream>
#include <string>
#include "Terran.h"
#include "Marine.h"

using namespace std;

Marine::Marine(string name) : Terran(name, 100, 50, 20) {
	cout << "[Marine::" << this->getName() << "] ������" << endl;
}

void Marine::move() {
	cout << "[Marine::" << this->getName() << "]" << this->getSpeed()
		<< "�� �ӵ��� �̵���" << endl;
}


void Marine::attack() {
	cout << "[Marine::" << this->getName() << "]" << this->getPower()
		<< "�� ������ ������" << endl;
}

void Marine::steampack() {
	cout << "[Marine::" << this->getName() << "] ������ �۵���" << endl;
}

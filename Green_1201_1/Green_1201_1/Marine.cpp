#include <iostream>
#include <string>
#include "Terran.h"
#include "Marine.h"

using namespace std;

Marine::Marine(string name) : Terran(name, 100, 50, 20) {
	cout << "[Marine::" << this->getName() << "] 생성됨" << endl;
}

void Marine::move() {
	cout << "[Marine::" << this->getName() << "]" << this->getSpeed()
		<< "의 속도로 이동함" << endl;
}


void Marine::attack() {
	cout << "[Marine::" << this->getName() << "]" << this->getPower()
		<< "의 힘으로 공격함" << endl;
}

void Marine::steampack() {
	cout << "[Marine::" << this->getName() << "] 스팀팩 작동함" << endl;
}

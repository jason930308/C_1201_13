#include <iostream>
#include <string>
#include "Terran.h"

using namespace std;
// for commit 
// Constructor
Terran::Terran(string _n, int _h, int _s, int _p) {
	this->name = _n;
	this->hp = _h;
	this->speed = _s;
	this->power = _p;
}

// getter

string Terran::getName() {
	return this->name;
}
int Terran::getHp() {
	return this->hp;
}
int Terran::getSpeed() {
	return this->speed;
}
int Terran::getPower() {
	return this->power;
}
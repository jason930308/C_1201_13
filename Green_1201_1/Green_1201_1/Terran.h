#ifndef Terran_h
#define Terran_h

#include <string>

using namespace std;

class Terran {

private:
	string name;
	int hp;
	int speed;
	int power;

public:
	Terran(string _n, int _h, int _s, int _p);

	string getName();
	int getHp();
	int getSpeed();
	int getPower();

	// 자식클래스들이 공통적으로 재정의하여 각각 구현.
	// --> 순수 가상함수로 선언
	virtual void move() = 0;
	virtual void attack() = 0;
	
};

#endif
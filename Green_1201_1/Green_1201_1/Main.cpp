#include <iostream>
#include <string>

#include "Terran.h"
#include "Marine.h"
#include "Tank.h"

#define MAX_UNIT_COUNT 5 // Maximum # of nuit

using namespace std;

int main() {
	// 개별 객체 생성

	// 1. Marine
	Marine m_1 = Marine("Marine 1");

	// 공통기능
	m_1.move();
	m_1.attack();

	// Marine 독자적인 기능
	m1.steampack();

	// 2. Tank
	Tank t_1 = Tank("Tank 1");

	// 공통기능
	t_1.move();
	t_1.attack();

	// Tank 독자적인 기능

	getchar();
	return 0;
}
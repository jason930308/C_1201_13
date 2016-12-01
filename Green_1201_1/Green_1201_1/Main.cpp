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
	Marine m1 = Marine("Marine 1");

	// 공통기능
	m1.move();
	m1.attack();

	// Marine 독자적인 기능
	m1.steampack();

	printf("\n");

	// 2. Tank
	Tank t1 = Tank("Tank 1");

	// 공통기능
	t1.move();
	t1.attack();

	// Tank 독자적인 기능

	getchar();
	return 0;
}
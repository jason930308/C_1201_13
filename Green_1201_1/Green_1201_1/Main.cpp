#include <iostream>
#include <string>

#include "Terran.h"
#include "Marine.h"
#include "Tank.h"

#define MAX_UNIT_COUNT 5 // Maximum # of nuit

using namespace std;

int main() {
	// ���� ��ü ����

	// 1. Marine
	Marine m1 = Marine("Marine 1");

	// ������
	m1.move();
	m1.attack();

	// Marine �������� ���
	m1.steampack();

	printf("\n");

	// 2. Tank
	Tank t1 = Tank("Tank 1");

	// ������
	t1.move();
	t1.attack();

	// Tank �������� ���

	getchar();
	return 0;
}
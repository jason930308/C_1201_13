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
	Marine m_1 = Marine("Marine 1");

	// ������
	m_1.move();
	m_1.attack();

	// Marine �������� ���
	m1.steampack();

	// 2. Tank
	Tank t_1 = Tank("Tank 1");

	// ������
	t_1.move();
	t_1.attack();

	// Tank �������� ���

	getchar();
	return 0;
}
#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;

void Location(int x1, int x2, int y1, int y2, int r1, int r2, double d) {
	if (d == 0) {
		if (r1 = r2) {
			printf("���������� ���������");
		}
		if (r1 < r2) {
			printf("���������� 1 � ���������� 2");
		};
		if (r2 < r1) {
			printf("���������� 2 � ���������� 1");
		};
	};
	if (r1 > r2) {
		if (d < (r1 - r2)) {
			printf("���������� 2 � ���������� 1");
		};
		if (d == r1 - r2) {
			printf("���������� 2 �������� ������ ���������� 1");
		};
		if (((r1 - r2) < d) && (d < (r1 + r2))) {
			printf("���������� ������������");
		};
	};
	if (r2 > r1) {
		if (d < (r2 - r1)) {
			printf("���������� 1 � ���������� 2");
		};
		if (d == r2 - r1) {
			printf("���������� 1 �������� ������ ���������� 2");
		};
		if (((r2 - r1) < d) && (d < (r2 + r1))) {
			printf("���������� ������������");
		};
	};
	if (d == (r1 + r2)) {
		printf("���������� ��������");
	};
	if (d > (r1 + r2)) {
		printf("���������� ������ ���� �� �����");
	};
	if ((r1 == r2) && (d > 0) && (d < r1 + r2)) {
		printf("���������� ������������");
	};
}

int main() {
	setlocale(LC_ALL, "Russian");
	int a, x1, x2, y1, y2, r1, r2;
	double d = 5.5;
	printf("������� ���������� ������ 1-�� ����������: ");
	scanf_s("%d %d", &x1, &y1);
	printf("������� �� ������ 1: ");
	scanf_s("%d", &r1);
	printf("������� ���������� ������ 2-�� ����������: ");
	scanf_s("%d %d", &x2, &y2);
	printf("������� �� ������ 2: ");
	scanf_s("%d", &r2);
	d = sqrt(abs(x2 - x1) * abs(x2 - x1) + abs(y2 - y1) * abs(y2 - y1));
	Location(x1,x2,y1,y2,r1,r2,d);
	return 0;
}
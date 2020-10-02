#include<stdio.h>
#include<math.h>
int Summ(double a) {
	int n = 0, zn = 2;
	double s = 1.0;
	while (s <= a) {
		s = s + (1.0 / zn);
		zn = zn * 2;
		n = n + 1;
	}
	printf("%d", n);
	return 0;
}

int main() {
	double a = 1.1;
	printf("Vvedite chislo ");
	scanf_s("%lf", &a);
	Summ(a);
	return 0;
}
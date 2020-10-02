#include<stdio.h>
#include<math.h>
void funk(int n) {
	int c1, c2, c3, c4, i, C;
	for (C = 1000; C <= 9999; C++) {
		i = C;
		c1 = i % 10;
		i = i / 10;
		c2 = i % 10;
		i = i / 10;
		c3 = i % 10;
		i = i / 10;
		c4 = i;
		if ((c1 + c2) == (c3 + c4)) {
			printf("%d\n", C);
		};
	};
}
	int main() {
	int n=1;
	funk(n);
	return 0;
}
	#include<stdio.h>
	#include<math.h>
	int funk(int n) {
		int i, ch = 1, nech = 0, sum=0;
		for (i = 2; i <=n; i++) {
			if ((i % 2) == 0) {
				ch = ch + i;
			}
			if ((i % 2) == 1) {
				nech = nech + i;
			}
			sum = ch - nech;
		}
		printf("%d", sum);
		return sum;
	}
	int main() {
		int n;
		printf("Enter chislo ");
		scanf_s("%d", &n);
		funk(n);
		return 0;
	}
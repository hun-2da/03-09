#include<stdio.h>

int main(void) {
	int sum = 0;

	for (int i = 0; i < 101; i++) {
		for (int i2 = 2; i2 <= i; i2++) {
			if (i != i2 && i % i2 == 0)
				break;
			else if (i == i2) {
				sum += i;
				printf("%d\t", i);
			}
		}
	}
	printf("\n소수의 합은 %d 이지요오오\n", sum);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int is_prime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1; 
}

void print_prime_by_range(int n) {
	int cnt = 0;
	for (int num = 2; num < n + 1; num++) {
		if (is_prime(num))
			cnt++;
	}
	printf("소수의 개수: %d\n", cnt);
}


int main(void)
{
	clock_t start, end;
	float res;

	start = clock();
	print_prime_by_range(50000);
	end = clock();

	res = (float)(end - start) / CLOCKS_PER_SEC;
	printf("실행 시간(초) : %.5f", res);
}
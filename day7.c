#include <stdio.h>
#include <time.h>
#include <math.h>

int main(void)
{
	int n = 50000, prime_size = 50001, prime_list[50001];
	// n�� ������ + 1
	int sqt = sqrt(n) + 1;
	clock_t start, end;
	float res;

	start = clock();

	// �迭 �ʱ�ȭ
	for (int i = 0; i < prime_size; i++)
		prime_list[i] = 1;

	// 2���� ������ ��������, �Ҽ��� ������� ���ܽ�Ŵ
	for (int i = 2; i < sqt; i++) {
		if (prime_list[i]) {
			for (int j = i + i; j < prime_size; j += i)
				prime_list[j] = 0;
		}
	}

	int cnt = 0;

	for (int i = 2; i < prime_size; i++) {
		if (prime_list[i]) {
			cnt++;
		}
	}

	end = clock();
	printf("�Ҽ� ����: %d\n", cnt);
	res = (float)(end - start) / CLOCKS_PER_SEC;
	printf("���� �ð�(��) : %.5f", res);
}
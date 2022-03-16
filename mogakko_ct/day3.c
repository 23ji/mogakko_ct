#include <stdio.h>

int binary_search(int* arr, int length, int target) {
	int start = 0;					// Ž�� �迭�� ���� �ε���
	int end = length - 1;			// Ž�� �迭�� �� �ε���
	int mid;

	while (end >= start) {
		mid = (start + end) / 2;    // �߾Ӱ� ����

		if (arr[mid] == target)		// ��ǥ���� ã���� ��    
			return 1;				// 1�� ����

		else if (arr[mid] > target)	// �߾Ӱ��� ��ǥ������ ū ���
			end = mid - 1;			// �� �ε����� ����

		else						// �߾Ӱ��� ��ǥ������ ���� ���
			start = mid + 1;		// ���� �ε����� ����
	}

	return 0;
}

int main(void)
{
	int arr[4] = { 215, 513, 712, 803}; // �� ������ ����
	int length = 4; //���� 4��
	int target = 10; // 10���� �߶����

	int result = binary_search(arr, length, target);

	printf("�迭�� %d�� �����մϴ�.", target);
	
	return 0;
}
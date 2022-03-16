#include <stdio.h>

int binary_search(int* arr, int length, int target) {
	int start = 0;					// 탐색 배열의 시작 인덱스
	int end = length - 1;			// 탐색 배열의 끝 인덱스
	int mid;

	while (end >= start) {
		mid = (start + end) / 2;    // 중앙값 설정

		if (arr[mid] == target)		// 목표값을 찾았을 때    
			return 1;				// 1을 리턴

		else if (arr[mid] > target)	// 중앙값이 목표값보다 큰 경우
			end = mid - 1;			// 끝 인덱스를 감소

		else						// 중앙값이 목표값보다 작은 경우
			start = mid + 1;		// 시작 인덱스를 증가
	}

	return 0;
}

int main(void)
{
	int arr[4] = { 215, 513, 712, 803}; // 각 랜선의 길이
	int length = 4; //랜선 4개
	int target = 10; // 10개로 잘라야함

	int result = binary_search(arr, length, target);

	printf("배열에 %d가 존재합니다.", target);
	
	return 0;
}
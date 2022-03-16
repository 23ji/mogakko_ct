#include <stdio.h>

void print_arr(int arr[], const char* sentence){
	printf("%s", sentence);
	for (int i = 0; i < 5; i++) 
		printf("%d", arr[i]);
		printf("입니다.\n"); 
}

int main(void) {
	int arr[5] = { 9, 6, 7, 3, 5};
	int length = 5;
	int tmp = 0;
	int min = 0;

	print_arr(arr, "변경 전 배열 ");

	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length - i - 1; j++) {
			if (arr[i] < arr[i + j]) {
				arr[i] = min;
			}

			tmp = arr[i];
			arr[i] = min;
			min = tmp;
		}
	}
	print_arr(arr, "변경 후 배열 ");
	return 0;
}
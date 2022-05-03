#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void FindNum(int* arr, int sz, int key) {
	int left = 0;
	int right = sz - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] < key) {
			left = mid + 1;
		}
		else if (arr[mid] > key) {
			right = mid - 1;
		}
		else {
			printf("找到了元素%d\n其下标为%d\n", arr[mid], mid);
			break;
		}

	}
	if (left > right) {
		printf("找不到\n");
	}
}


int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7 , 8, 9 ,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int input = 0;
	while (1) {
		printf("input num\n");
		scanf("%d", &input);
		FindNum(arr, sz, input);
	}
	return 0;
}

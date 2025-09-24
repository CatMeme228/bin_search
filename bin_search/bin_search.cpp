#include <stdio.h>

int bin_search(int left, int right, int x, int arr[]) {
	while (left <= right) {
		int middle = left + (right - left) / 2;
		if (arr[middle] == x) return middle;
		if (x < arr[middle]) {
			right = middle - 1;
		}
		else {
			left = middle + 1;
		}
	}
	return -1;
}

int main() {
	int a[] = { 1,1,2,2,3,34,45,65,577,653,7809,1234567,765321};
	int lenght = sizeof(a) / sizeof(a[0]);
	int r = lenght - 1, num = 2;
	printf("num index: %d", bin_search(0, r, num, a));

	return 0;
}
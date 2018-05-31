//#include <iostream>
//using namespace std;
//
//void swap(int a[], int left, int right) {
//	int tmp = a[left];
//	a[left] = a[right];
//	a[right] = tmp;
//}
//int partition(int a[], int left, int right) {
//	int pivot = a[left];
//	int low = left + 1;
//	int high = right;
//
//	while (low <= high) {
//		while (pivot >= a[low] && low <= right) {
//			low++;
//		}
//		
//		while (pivot <= a[high] && high >= (left + 1)) {
//			high--;
//		}
//
//		if (low <= high) {
//			swap(a, low, high);
//		}
//	}
//
//	swap(a, left, high);
//
//	return high;
//}
//
//
//void sort(int a[], int left, int right) {
//	if (left <= right) {
//		int pivot = partition(a, left, right);
//		sort(a, left, pivot - 1);
//		sort(a, pivot + 1, right);
//	}
//
//
//
//}
//int main(void) {
//	int a[10] = { 1,2,3,5,76,4,7,5,7,9 };
//	int len = sizeof(a) / sizeof(int);
//
//	sort(a, 0, len - 1);
//
//	for (int i = 0; i < len; i++) {
//		printf("%d\n", a[i]);
//	}
//
//	return 0;
//}
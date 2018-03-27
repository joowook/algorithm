//#include <iostream>
//using namespace std;
//
//int a[10] = { 4,3,5,2,6,1,7,9,8,10 };
//int b[10];
//
//void merge(int start, int end) {
//	int mid = (start + end) / 2;
//	int i = start, j = mid + 1, k = 0;
//
//	while (i <= mid && j <= end) {
//		if (a[i] <= a[j]) {
//			b[k++] = a[i++];
//		}
//		else {
//			b[k++] = a[j++];
//		}
//	}
//
//	while (i <= mid) {
//		b[k++] = a[i++];
//	}
//
//	while (j <= end) {
//		b[k++] = a[j++];
//	}
//
//	for (int i = start; i <= end; i++) {
//		a[i] = b[i - start];
//	}
//}
//
//void sort(int start, int end) {
//	if (start == end) {
//		return;
//	}
//
//	int mid = (start + end) / 2;
//	sort(start, mid);
//	sort(mid + 1, end);
//	merge(start, end);
//}
//int main(void) {
//	sort(0, 9);
//
//	for (int i = 0; i < 10; i++) {
//		printf("%d\n", a[i]);
//	}
//
//	return 0;
//}
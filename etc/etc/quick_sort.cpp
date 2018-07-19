//#include <iostream>
//using namespace std;
//
//#define N 10
//
//void swap(int a[], int left, int right) {
//    int temp = a[left];
//    a[left] = a[right];
//    a[right] = temp;
//}
//
//int partition(int a[], int left, int right) {
//    int pivot = a[left];
//    int low = left + 1;
//    int high = right;
//
//    while (low <= high) {
//        while (pivot >= a[low] && low <= right) {
//            low++;
//        }
//
//        while (pivot <= a[high] && high >= (left + 1)) {
//            high--;
//        }
//
//        if (low <= high) {
//            swap(a, low, high);
//        }
//    }
//
//    swap(a, left, high);
//
//    return high;
//}
//void sort(int a[], int left, int right) {
//    if (left <= right) {
//        int pivot = partition(a, left, right);
//        sort(a, left, pivot - 1);
//        sort(a, pivot + 1, right);
//    }
//}
//int main(void) {
//    int a[N] = { 2,5,4,1,8,6,8,5,6,7 };
//
//    sort(a, 0, N - 1);
//
//    for (int i = 0; i < N; i++) {
//        printf("%d\n", a[i]);
//    }
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//#define MAX 2147483647
//int heap[100001];
//int hc;
//
//void push(int x) {
//	heap[++hc] = x;
//
//	for (int i = hc; i > 1; i /= 2) {
//		if (heap[i] < heap[i / 2]) {
//			swap(heap[i], heap[i / 2]);
//		}
//	}
//}
//
//int pop() {
//	int x = heap[1];
//	heap[1] = heap[hc];
//	heap[hc--] = MAX;
//
//	for (int i = 1; i * 2 <= hc;) {
//		int m = heap[i * 2] < heap[i * 2 + 1] ? i * 2 : i * 2 + 1;
//
//		if (heap[i] > heap[m]) {
//			swap(heap[i], heap[m]);
//			i = m;
//		}
//		else {
//			break;
//		}
//	}
//	return x;
//}
//
//int main(void) {
//	int N;
//
//	scanf("%d", &N);
//
//	while (N--) {
//		int x;
//
//		scanf("%d", &x);
//
//		if (x == 0) {
//			if (hc == 0) {
//				printf("0\n");
//			}
//			else {
//				printf("%d\n", pop());
//			}
//		}
//		else {
//			push(x);
//		}
//	}
//
//	return 0;
//}
//
////#include <iostream>
////#include <queue>
////using namespace std;
////
////int main(void) {
////	int N;
////	scanf("%d", &N);
////
////	priority_queue<int> q;
////	while (N--) {
////		int x;
////
////		scanf("%d", &x);
////		x *= -1;
////		if (x == 0) {
////			if (!q.empty()) {
////				printf("%d\n", -1 * q.top());
////				q.pop();
////			}
////			else {
////				printf("0\n");
////			}
////		}
////		else {
////			q.push(x);
////		}
////	}
////
////	return 0;
////}
////
//////#include <functional>
//////#include <iostream>
//////#include <queue>
//////#include <vector>
//////using namespace std;
//////
//////int main(void) {
//////	int N;
//////	scanf("%d", &N);
//////
//////	priority_queue<int, vector<int>, greater<int>> q;
//////	while (N--) {
//////		int x;
//////
//////		scanf("%d", &x);
//////
//////		if (x == 0) {
//////			if (!q.empty()) {
//////				printf("%d\n", q.top());
//////				q.pop();
//////			}
//////			else {
//////				printf("0\n");
//////			}
//////		}
//////		else {
//////			q.push(x);
//////		}
//////	}
//////
//////	return 0;
//////}
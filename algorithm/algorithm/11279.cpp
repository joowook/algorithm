//#include <iostream>
//using namespace std;
//
//int heap[100001];
//int hc = 0;
//
//void push(int x) {
//	heap[++hc] = x;
//
//	for (int i = hc; i >1; i/=2) {
//		if (heap[i / 2] < heap[i]) {
//			swap(heap[i / 2], heap[i]);
//		}
//	}
//}
//
//int pop() {
//	int x = heap[1];
//	heap[1] = 0;
//	if (hc != 0) {
//		swap(heap[1], heap[hc--]);
//	}
//
//	for (int i = 1; i * 2 <= hc; ) {
//		int m = heap[i * 2] > heap[i * 2 + 1] ? i * 2 : i * 2 + 1;
//	
//		if (heap[i] < heap[m]) {
//			swap(heap[i], heap[m]);
//			i = m;
//		}
//		else {
//			break;
//		}
//	}
//
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
//			printf("%d\n", pop());
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
////	priority_queue <int> q;
////
////	int N;
////
////	scanf("%d", &N);
////
////	for (int i = 0; i < N; i++) {
////		int x;
////
////		scanf("%d", &x);
////
////		if (x == 0) {
////			if (!q.empty()) {
////				printf("%d\n", q.top());
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
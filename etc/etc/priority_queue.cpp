//#include <iostream>
//using namespace std;
//
//int heap[10001];
//int hn;
//
//void swap(int x, int y) {
//    int t = heap[x];
//    heap[x] = heap[y];
//    heap[y] = t;
//}
//
//int pop() {
//    int ans = heap[1];
//    heap[1] = heap[hn];
//    heap[hn--] = 0;
//
//    for (int i = 1; i * 2 < hn;) {
//        if (heap[i] > heap[i * 2] && heap[i] > heap[i * 2 + 1]) {
//            break;
//        }
//        else if (heap[i * 2] > heap[i * 2 + 1]) {
//            swap(i, i * 2);
//            i *= 2;
//        }
//        else {
//            swap(i, i * 2 + 1);
//            i = i * 2 + 1;
//        }
//    }
//
//    return ans;
//}
//
//void push(int x) {
//    heap[++hn] = x;
//
//    for (int i = hn; i > 1; i /= 2) {
//        if (heap[i] > heap[i / 2]) {
//            swap(i, i / 2);
//        }
//        else {
//            break;
//        }
//    }
//}
//
//int main(void) {
//    push(4);
//    push(10);
//    push(9);
//    push(8);
//    push(1);
//    push(2);
//
//    int t = hn;
//
//    for (int i = 0; i < t; i++) {
//        printf("%d\n", pop());
//    }
//
//    return 0;
//}
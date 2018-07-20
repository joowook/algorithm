//#include <iostream>
//using namespace std;
//
//int heap[100001];
//int hn;
//
//void swap(int x, int y) {
//    int tmp = heap[x];
//    heap[x] = heap[y];
//    heap[y] = tmp;
//}
//
//int pop() {
//    int ans = heap[1];
//    heap[1] = heap[hn];
//    heap[hn--] = 0;
//
//    for (int i = 1; i * 2 <= hn;) {
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
//        if (heap[hn] > heap[hn / 2]) {
//            swap(hn, hn / 2);
//        }
//        else {
//            break;
//        }
//    }
//}
//
//int main(void) {
//    
//}
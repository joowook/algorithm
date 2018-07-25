//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int N = 10;
//int *a = new int[N];
//int *tree = new int[N * 4 + 1];
//
//void init_tree(int node, int left, int right) {
//    if (left == right) {
//        tree[node] = a[left];
//        return;
//    }
//
//    int mid = (left + right) / 2;
//    init_tree(node * 2, left, mid);
//    init_tree(node * 2 + 1, mid + 1, right);
//
//    tree[node] = max(tree[node * 2], tree[node * 2 + 1]);
//}
//
////int go(int left, int right, int node, int nodeL, int nodeR) {
////    if (nodeL > right || nodeR < left) {
////        return 0;
////    }
////    if (left <= nodeL && nodeR <= right) {
////        return tree[node];
////    }
////
////    int mid
////}
//
//int main(void) {
//    for (int i = 0; i < 10; i++) {
//        a[i] = i;
//    }
//
//    init_tree(1, 0, N - 1);
//
//    for (int i = 1; i <= 25; i++) {
//        printf("%d\n", tree[i]);
//    }
//
//
//
//
//    return 0;
//}
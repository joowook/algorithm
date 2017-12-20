//#include <iostream>
//#include <algorithm>
//using namespace std;
//int a[10000];
//int n;
//bool next_permutation() {
//    int x = -1;
//
//    for (int i = n - 1; i > 0; i--) {
//        if (a[i] > a[i - 1]) {
//            x = i;
//            break;
//        }
//    }
//    if (x == -1) {
//        return 0;
//    }
//
//    int y = -1;
//
//    for (int i = n - 1; i >= x; i--) {
//        if (a[i] > a[x - 1]) {
//            y = i;
//            break;
//        }
//    }
//
//    swap(a[x - 1], a[y]);
//
//    sort(a + x, a + n);
//
//    return true;
//}
//int main(void) {
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//
//    if (next_permutation()) {
//        for (int i = 0; i < n; i++) {
//            printf("%d ", a[i]);
//        }
//    }
//    else {
//        printf("-1\n");
//    }
//
//    return 0;
//}
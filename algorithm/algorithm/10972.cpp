////#include <iostream>
////#include <vector>
////#include <algorithm>
////using namespace std;
////
////bool next_permutation(vector<int> &a, int n) {
////    int x = -1;
////    for (int i = n - 1; i > 0; i--) {
////        if (a[i] > a[i - 1]) {
////            x = i;
////            break;
////        }
////    }
////    if (x == -1) {
////        return false;
////    }
////    int y = -1;
////    for (int i = n - 1; i >= x; i--) {
////        if (a[i] > a[x - 1]) {
////            y = i;
////            break;
////        }
////    }
////
////    swap(a[x-1], a[y]);
////
////    reverse(a.begin() + x, a.end());
////
////    return true;
////}
////int main(void) {
////    int n;
////    scanf("%d", &n);
////    vector<int> a(n);
////    for (int i = 0; i < n; i++) {
////        scanf("%d",&a[i]);
////    }
////
////    if (next_permutation(a, n)) {
////        for (int i = 0; i < n; i++) {
////            printf("%d ", a[i]);
////        }
////    }
////    else {
////        printf("-1");
////    }
////
////    return 0;
////}
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int main(void) {
//    int n;
//    scanf("%d", &n);
//    vector<int> a(n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//
//    if (next_permutation(a.begin(), a.end())) {
//        for (int i = 0; i < n; i++) {
//            printf("%d ", a[i]);
//        }
//    }
//    else {
//        printf("-1");
//    }
//
//    return 0;
//}
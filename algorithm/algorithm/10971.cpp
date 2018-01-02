//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int a[10][10];
//int d[10];
//
//int main(void) {
//    int n;
//
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            scanf("%d", &a[i][j]);
//        }
//    }
//
//    for (int i = 0; i < n; i++) {
//        d[i] = i;
//    }
//
//    int ans = 1000000000;
//
//    do {
//        int tmp = 0;
//        bool ok = true;
//
//        for (int i = 0; i < n - 1; i++) {
//            if (a[d[i]][d[i + 1]] == 0) {
//                ok = false;
//                break;
//            }
//            else {
//                tmp += a[d[i]][d[i + 1]];
//            }
//        }
//
//        if (ok && a[d[n - 1]][d[0]] != 0) {
//            tmp += a[d[n - 1]][d[0]];
//
//            if (ans > tmp) {
//                ans = tmp;
//            }
//        }
//
//    } while (next_permutation(d + 1, d + n));
//     
//    printf("%d\n", ans);
//
//    return 0;
//}
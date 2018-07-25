//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int a[15][15];
//
//int main(void) {
//    int T;
//
//    scanf("%d", &T);
//
//    while (T--) {
//        int k, n;
//
//        scanf("%d %d", &k, &n);
//        memset(a, 0, sizeof(a));
//
//        for (int i = 1; i <= n; i++) {
//            a[0][i] = i;
//        }
//
//        for (int i = 1; i <= k; i++) {
//            for (int j = 1; j <= n; j++) {
//                for (int k = 1; k <= j; k++) {
//                    a[i][j] += a[i - 1][k];
//                }
//            }
//        }
//
//        printf("%d\n", a[k][n]);
//    }
//
//    return 0;
//}
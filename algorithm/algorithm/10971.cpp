//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int n;
//int a[11][11];
//int v[11];
//
//int main(void) {
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            scanf("%d", &a[i][j]);
//        }
//    }
//
//    
//    for (int i = 1; i <= n; i++) {
//        v[i] = i;
//    }
//    int ans = 100000000;
//    do {
//        bool ok = true;
//        int sum = 0;
//        for (int i = 1; i < n; i++) {
//            if (a[v[i]][v[i + 1]] != 0) {
//                sum += a[v[i]][v[i + 1]];
//            }
//            else {
//                ok = false;
//            }
//        }
//        if (ok && a[v[n]][v[1]] != 0) {
//            sum += a[v[n]][v[1]];
//            if (ans > sum)
//                ans = sum;
//        }
//
//    } while (next_permutation(v, v+n));
//
//
//    printf("%d\n", ans);
//
//    return 0;
//}
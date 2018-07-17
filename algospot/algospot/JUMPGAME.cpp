//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int a[101][101];
//int dp[101][101];
//
//int n;
//int go(int y, int x) {
//    if (y >= n || x >= n) {
//        return 0;
//    }
//
//    if (y == n - 1 && x == n - 1) {
//        return 1;
//    }
//
//    int &ret = dp[y][x];
//
//    if (ret != -1) {
//        return ret;
//    }
//
//    int ny = y + a[y][x];
//    int nx = x + a[y][x];
//
//    return ret = (go(ny, x) || go(y, nx));
//}
////int go(int y, int x) { // 풀이 안보고 푼 것 한번에 dp[ny][x], dp[y][nx]를 구하려고 해서 시간이 좀 더 걸림
////    if (y >= n || x >= n) {
////        return 0;
////    }
////
////    if (y == n - 1 && x == n - 1) {
////        return 1;
////    }
////
////    int ny = y + a[y][x];
////    int nx = x + a[y][x];
////
////    if (ny < n) {
////        if (dp[ny][x] == -1) {
////            if (go(ny, x)) {
////                return dp[ny][x] = 1;
////            }
////            else {
////                dp[ny][x] = 0;
////            }
////        }
////    }
////
////    if (nx < n) {
////        if (dp[y][nx] == -1) {
////            if (go(y, nx)) {
////                return dp[y][nx] = 1;
////            }
////            else {
////                dp[y][nx] = 0;
////            }
////        }
////    }
////
////    return 0;
////}
//
//int main(void) {
//    int C;
//
//    scanf("%d", &C);
//
//    while (C--) {
//
//        scanf("%d", &n);
//
//        memset(dp, -1, sizeof(dp));
//
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                scanf("%d", &a[i][j]);
//            }
//        }
//
//        if (go(0, 0)) {
//            printf("YES\n");
//        }
//        else {
//            printf("NO\n");
//        }
//    }
//
//    return 0;
//}
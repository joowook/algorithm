//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//int a[101][101];
//int dp[101][101];
//int N;
//
//int go(int y, int x) {
//    int &ret = dp[y][x];
//
//    if (ret != -1) {
//        return ret;
//    }
//
//    if (y == N - 1) {
//        return a[y][x];
//    }
//
//    return ret = a[y][x] + max(go(y + 1, x), go(y + 1, x + 1));
//}
//int main(void) {
//    int C;
//
//    scanf("%d", &C);
//
//    while (C--) {
//        scanf("%d", &N);
//
//        for (int i = 0; i < N; i++) {
//            for (int j = 0; j <= i; j++) {
//                scanf("%d", &a[i][j]);
//            }
//        }
//
//        memset(dp, -1, sizeof(dp));
//
//        printf("%d\n", go(0, 0));
//    }
//
//    return 0;
//}
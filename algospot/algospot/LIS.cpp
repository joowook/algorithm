//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//int a[501];
//int dp[501];
//int N;
//
//int go(int n) {
//    int &ret = dp[n];
//
//    if (ret != -1) {
//        return ret;
//    }
//
//    if (n == N - 1) {
//        return ret = 1;
//    }
//
//    int ans = 0;
//    for (int i = n + 1; i < N; i++) {
//        if (a[n] < a[i]) {
//            ans = max(ans, go(i) + 1);
//        }
//    }
//
//    return ret = ans;
//}
//
//int main(void) {
//    int C;
//
//    scanf("%d", &C);
//
//    while (C--) {
//        scanf("%d", &N);
//
//        memset(dp, -1, sizeof(dp));
//
//        for (int i = 0; i < N; i++) {
//            scanf("%d", &a[i]);
//        }
//
//        int ans = 0;
//
//        for (int i = 0; i < N; i++) {
//            if (dp[i] == -1) {
//                ans = max(ans, go(i));
//            }
//        }
//
//        printf("%d\n", ans);
//    }
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//int vip[41];
//int dp[41];
//int main(void) {
//    int n, m, temp = 0;
//    int ans = 1;
//    scanf("%d %d", &n, &m);
//
//    dp[0] = 1;
//    dp[1] = 1;
//
//    for (int i = 2; i <= n; i++) {
//        dp[i] = dp[i - 1] + dp[i - 2];
//    }
//
//    for (int i = 0; i < m; i++) {
//        int x;
//        scanf("%d", &x);
//        ans *= dp[x - temp - 1];
//        temp = x;
//    }
//
//    ans *= dp[n - temp];
//
//    printf("%d", ans);
//
//    return 0;
//}
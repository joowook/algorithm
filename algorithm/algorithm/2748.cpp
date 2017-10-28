//#include <iostream>
//using namespace std;
//
//long long dp[91];
//int main(void) {
//    int n = 0;
//    scanf("%d", &n);
//    dp[1] = dp[2] = 1;
//    for (int i = 3; i <= n; i++) {
//        dp[i] = dp[i - 1] + dp[i - 2];
//    }
//
//    printf("%lld", dp[n]);
//
//    return 0;
//}
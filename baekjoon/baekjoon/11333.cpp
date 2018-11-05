//#include <iostream>
//#include <cstring>
//using namespace std;
//#define MOD 1000000007
//long long dp[10001];
//
//long long go(int n) {
//    long long &ret = dp[n];
//    
//    if (ret != -1) {
//        return ret;
//    }
//
//    if (n % 3 != 0) {
//        return ret = 0;
//    }
//
//    return ret = (go(n - 3) * 3 + go(n - 6) * 4) % MOD;
//}
//
//int main(void) {
//    int T;
//
//    scanf("%d", &T);
//
//    memset(dp, -1, sizeof(dp));
//
//    dp[0] = 1;
//    dp[1] = dp[2] = dp [4]=dp[5] = 0;
//    dp[3] = 3;
//    dp[6] = 13;
//
//    
//    while (T--) {
//        int n;
//        scanf("%d", &n);
//
//        go(n);
//
//        printf("%lld\n", dp[n]);
//    }
//
//
//    return 0;
//}
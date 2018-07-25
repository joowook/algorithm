//#include <iostream>
//#include <cstring>
//#define MOD 1000000007
//
//using namespace std;
//
//int dp[101], dp2[101];
//
//int go(int n) {
//    int &ret = dp[n];
//
//    if (ret != -1) return ret;
//
//    if (n == 0 || n == 1) {
//        return 1;
//    }
//    else if (n == 2) {
//        return 2;
//    }
//
//    return ret = (go(n - 1) + go(n - 2)) % MOD;
//}
//
//int go2(int n) {
//    if (n % 2 == 1) {
//        return (go(n) - go(n / 2) + MOD) % MOD;
//    }
//
//    int ret = go(n);
//
//    ret = (ret - go(n / 2) + MOD) % MOD;
//    ret = (ret - go(n / 2 - 1) + MOD) % MOD;
//
//    return ret;
//}
//
//int go3(int n) {
//    int &ret = dp2[n];
//
//    if (ret != -1) return ret;
//
//    if (n == 1 || n == 2) {
//        return 0;
//    }
//    if (n == 3 || n == 4) {
//        return 2;
//    }
//
//    ret = go3(n - 2);
//    ret = (ret + go3(n - 4)) % MOD;
//    ret = (ret + go(n - 3)) % MOD;
//    ret = (ret + go(n - 3)) % MOD;
//
//    return ret;
//}
//
//int main(void) {
//    int C;
//
//    scanf("%d", &C);
//
//    while (C--) {
//        int N;
//
//        memset(dp, -1, sizeof(dp));
//        memset(dp2, -1, sizeof(dp2));
//
//        scanf("%d", &N);
//        printf("%d\n", go2(N));
//    }
//
//    return 0;
//}
//#include <iostream>
//#include <cstring>
//using namespace std;
//#define MOD 1000000007
//int dp[101], dp2[101];
//
//int go(int n) {
//    if (n == 1 || n == 2) {
//        return n;
//    }
//
//    int &ret = dp[n];
//
//    if (ret != -1) return ret;
//
//    return ret = (go(n - 1) + go(n - 2))%MOD;
//}
//
//int go2(int n) { // 전체 - 대칭 수 
//    if (n % 2 == 1) {
//        return (go(n) - go(n / 2) + MOD) % MOD;
//    }
//
//    int ret = go(n);
//    ret = (ret - go(n / 2) + MOD) % MOD;
//    ret = (ret - go(n / 2 - 1) + MOD) % MOD;
//
//    return ret;
//}
//
//int go3(int n) { // 전체 - 비대칭 수 
//    if (n <= 2) {
//        return 0;
//    }
//    int &ret = dp2[n];
//    
//    if (ret != -1)return ret;
//
//    ret = go3(n - 2);
//    ret = (ret + go3(n - 4)) % MOD;
//    ret = (ret + go(n - 3)) % MOD;
//    ret = (ret + go(n - 3)) % MOD;
//
//    return ret;
//}
//
//
//int main(void) {
//    int C;
//
//    scanf("%d", &C);
//
//    while (C--) {
//        int N;
//
//        scanf("%d", &N);
//
//        memset(dp, -1, sizeof(dp));
//        memset(dp2, -1, sizeof(dp2));
//        dp[0] = 1;
//
//        printf("%d\n", go2(N));
//        //printf("%d\n", go3(N));
//
//    }
//
//    return 0;
//}
//#include <iostream>
//#include <cstring>
//using namespace std;
//#define MOD 10000000
//int dp[101][101];
//
//int go(int n, int first) {
//    if (n == first) return 1;
//
//    int &ret = dp[n][first];
//    if (ret != -1) return ret;
//
//    ret = 0;
//    
//    for (int i = 1; i <= n - first; i++) {
//        int add = first + i - 1;
//        add *= go(n - first, i);
//        add %= MOD;
//        ret += add;
//        ret %= MOD;
//    }
//
//    return ret;
//}
//
//int main(void) {
//    int C;
//
//    scanf("%d", &C);
//
//    memset(dp, -1, sizeof(dp));
//
//    while (C--) {
//        int N;
//
//        scanf("%d", &N);
//
//        int ans = 0;
//
//        for (int i = 1; i <= N; i++) {
//            ans += go(N, i);
//            ans %= MOD;
//        }
//
//        printf("%d\n", ans);
//    }
//
//    return 0;
//}
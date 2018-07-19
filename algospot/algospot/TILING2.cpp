////#include <iostream>
////#include <algorithm>
////#include <cstring>
////using namespace std;
////
////#define MOD 1000000007
////int N;
////int dp[101];
////
////int go(int n) {
////    int &ret = dp[n];
////
////    if (ret != -1) {
////        return ret;
////    }
////
////    if (n == 1) {
////        return 1;
////    }
////    if (n == 2) {
////        return 2;
////    }
////
////    return ret = (go(n-1) + go(n-2))%MOD;
////}
////
////int main(void) {
////    int C;
////
////    scanf("%d", &C);
////
////    while (C--) {
////        scanf("%d", &N);
////
////        memset(dp, -1, sizeof(dp));
////
////        
////        printf("%d\n", go(N));
////    }
////
////    return 0;
////}
//
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//#define MOD 1000000007
//int N;
//int dp[101];
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
//        dp[0] = 1;
//        dp[1] = 1;
//
//        for (int i = 2; i <= N; i++) {
//            dp[i] = (dp[i - 1] + dp[i - 2])%MOD;
//        }
//        printf("%d\n", (dp[N]) % MOD);
//    }
//
//    return 0;
//}
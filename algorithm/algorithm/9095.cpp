//#include <iostream>
//using namespace std;
//
//int dp[11];
//
//int go(int n) {
//    if (dp[n] > 0)
//        return dp[n];
//    else {
//        dp[n] = go(n - 1) + go(n - 2) + go(n - 3);
//    }
//
//    return dp[n];
//}
//
//int main(void) {
//    int T, n;
//
//    cin >> T;
//
//    dp[1] = 1;
//    dp[2] = 2;
//    dp[3] = 4;
//
//    while (T--) {
//        cin >> n;
//        cout << go(n) << '\n';
//    }
//
//    return 0;
//}
////int main(void) {
////    int dp[11] = { 0 };
////
////    int n, T;
////    cin >> T;
////
////    dp[1] = 1;
////    dp[2] = 2;
////    dp[3] = 4;
////    while (T--) {
////        cin >> n;
////        for (int i = 4; i <= n; i++) {
////            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
////        }
////
////        cout << dp[n] << '\n';
////    }
////
////    return 0;
////}
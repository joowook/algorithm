//#include <iostream>
//using namespace std;
//
//int dp[1001];
//int go(int n) {
//    if (dp[n] > 0)
//        return dp[n];
//    if (n == 1) {
//        dp[n] = n;
//    }
//    else if (n == 2) {
//        dp[n] = 3;
//    }
//    else {
//        dp[n] = go(n - 1) + 2 * go(n - 2);
//        dp[n] %= 10007;
//    }
//
//    return dp[n];
//}
//
//
//int main(void) {
//    int n;
//    cin >> n;
//
//    cout << go(n) << '\n';
//
//    return 0;
//}
//
//
////int main(void) {
////    int dp[1001];
////    int n;
////
////    cin >> n;
////
////    dp[1] = 1;
////    dp[2] = 3;
////
////    for (int i = 3; i <= n; i++) {
////        dp[i] = dp[i - 1] + 2 * dp[i - 2];
////        dp[i] %= 10007;
////    }
////
////    cout << dp[n];
////
////    return 0;
////}
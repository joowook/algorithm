//#include <iostream>
//using namespace std;
//
//int dp[1001];
//
//int go(int n) { // top-down
//    if (dp[n] > 0)
//        return dp[n];
//
//    if (n <= 2)
//        return n;
//    
//    else {
//        dp[n] = go(n - 1) + go(n - 2);
//        dp[n] %= 10007;
//    }
//    return dp[n];
//}
//
//int main(void) {
//    int n;
//
//    cin >> n;
//
//    cout << go(n) << '\n';
//
//    return 0;
//}
//
//
//
////int main(void) { // bottom_up
////    int dp[1001] = { 0 };
////    int n;
////    
////    cin >> n;
////    dp[1] = 1;
////    dp[2] = 2;
////
////    for (int i = 3; i <= n; i++) {
////        dp[i] = dp[i - 1] + dp[i - 2];
////        dp[i] %= 10007;
////    }
////
////    cout << dp[n]<< '\n';
////
////    return 0;
////}
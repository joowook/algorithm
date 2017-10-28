////#include <iostream>
////using namespace std;
////
////
////int main(void) {
////    int n, k;
////
////    long long dp[201] = { 0 };
////    cin >> n >> k;
////
////    dp[0] = 1;
////
////    for (int i = 1; i <= k; i++) {
////        for (int j = n; j >= 0; j--) {
////            for (int l = 1; l <= j; l++) {
////                dp[j] += dp[j - l];
////                dp[j] %= 1000000000;
////            }
////        }
////    }
////
////    cout << dp[n];
////
////    return 0;
////}
//
//
//
//#include <iostream>
//using namespace std;
//
//
//
//int main(void) {
//    int n, k;
//
//    long long dp[201][201] = { 0 };
//    cin >> n >> k;
//
//    dp[0][0] = 1;
//    for (int i = 1; i <= k; i++) {
//        for (int j = 0; j <= n; j++) {
//            for (int l = 0; l <= j; l++) {
//                dp[i][j] += dp[i - 1][j - l];
//                dp[i][j] %= 1000000000;
//            }
//        }
//    }
//
//    cout << dp[k][n];
//
//    return 0;
//}
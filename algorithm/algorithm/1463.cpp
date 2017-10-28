//#include <iostream>
//using namespace std;
//#define MAX 1000001
//int dp[MAX];
//
//int main(void) {
//    int n;
//    cin >> n;
//    for (int i = 2; i <= n; i++) {
//        dp[i] = dp[i-1] + 1;
//        if (i % 2 == 0) {
//            int temp = dp[i / 2] + 1;
//            if (dp[i] > temp)
//                dp[i] = temp;
//        }
//        if (i % 3 == 0) {
//            int temp = dp[i / 3] + 1;
//            if (dp[i] > temp)
//                dp[i] = temp;
//        }
//    }
//
//    cout << dp[n];
//
//    return 0;
//}
//
//
//
//
//
//
//
//
//
////int go(int n) {
////    if (n == 1)
////        return 0;
////    if (dp[n] > 0)
////        return dp[n];
////
////    dp[n] = go(n - 1) + 1;
////    if (n % 2 == 0) {
////        int temp = go(n / 2) + 1;
////        if (dp[n] > temp)
////            dp[n] = temp;
////    }
////    if (n % 3 == 0) {
////        int temp = go(n / 3) + 1;
////        if (dp[n] > temp)
////            dp[n] = temp;
////    }
////
////    return dp[n];
////}
////
////int main(void) {
////    int n;
////    cin >> n;
////
////    cout << go(n);
////
////    getchar();
////    getchar();
////
////}
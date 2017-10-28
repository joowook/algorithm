//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main(void) {
//    int n = 0;
//
//    cin >> n;
//
//    vector<int> a(n + 1);
//    for (int i = 1; i <= n; i++)
//        cin >> a[i];
//
//    vector<int> dp(n + 1);
//
//    dp[1] = a[1];
//    if(n>=2)
//        dp[2] = a[1] + a[2];
//
//    for (int i = 3; i <= n; i++) {
//        dp[i] = max(dp[i - 2] + a[i], dp[i - 3] + a[i - 1] + a[i]);
//    }
//
//    cout << dp[n];
//
//    return 0;
//}
//
//
////int main(void) {
////    int n = 0;
////
////    cin >> n;
////    
////    vector<int> a(n + 1);
////
////    for (int i = 1; i <= n; i++) {
////        cin >> a[i];
////    }
////
////    vector<int[3]> dp(n + 1);
////
////    dp[1][1] = a[1];
////    
////    for (int i = 2; i <= n; i++) {
////        dp[i][2] = dp[i - 1][1] + a[i];
////        dp[i][1] = max(dp[i - 2][1], dp[i - 2][2]) + a[i];
////    }
////
////    cout << max(dp[n][1], dp[n][2]);
////
////    return 0;
////}
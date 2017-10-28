//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main(void) { //1차원 dp 0번연속, 1번연속, 2번연속 중 최대값
//    int n;
//    cin >> n;
//
//    int arr[10001] = { 0 };
//    int dp[10001] = { 0 };
//
//    for (int i = 1; i <= n; i++) {
//        cin >> arr[i];
//    }
//
//    dp[1] = arr[1];
//    dp[2] = arr[1] + arr[2];
//
//    for (int i = 3; i <= n; i++) {
//        dp[i] = max(max(dp[i - 1], dp[i - 2] + arr[i]), dp[i-3]+arr[i-1]+arr[i]);
//    }
//
//    cout << dp[n] << '\n';
//
//    return 0;
//}
////int main(void) { // 2차원 dp 0번연속, 1번연속, 2번연속 최대값
////    int n;
////        cin >> n;
////        
////        int arr[10001] = { 0 };
////        int dp[10001][3] = { 0 };
////    
////        for (int i = 1; i <= n; i++) {
////            cin >> arr[i];
////        }
////        dp[1][1] = arr[1];
////
////        for (int i = 2; i <= n; i++) {
////            dp[i][0] = max(max(dp[i - 1][0], dp[i - 1][1]), dp[i - 1][2]);
////            dp[i][1] = dp[i - 1][0] + arr[i];
////            dp[i][2] = dp[i - 1][1] + arr[i];
////        }
////
////        cout << max(max(dp[n][0], dp[n][1]),dp[n][2]);
////
////        return 0;
////}
//
////int main(void) { //2차원 dp 마지막이 마셨거나 안마셨을때
////    int n;
////    cin >> n;
////    
////    int arr[10001] = { 0 };
////    int dp[10001][2] = { 0 };
////
////    for (int i = 1; i <= n; i++) {
////        cin >> arr[i];
////    }
////    dp[1][1] = arr[1];
////    
////    for (int i = 2; i <= n; i++) {
////        dp[i][1] = max(dp[i - 2][0] + arr[i - 1] + arr[i], dp[i-1][0] + arr[i]);
////        dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
////    }
////
////    cout << max(dp[n][0], dp[n][1]) << '\n';
////
////    return 0;
////}
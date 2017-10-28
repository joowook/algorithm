//#include <iostream>
//using namespace std;
//
//int main(void) {
//    int dp[1001] = { 0 };
//    int arr[1001] = { 0 };
//    int n;
//    cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        cin >> arr[i];
//    }
//
//    for (int i = 1; i <= n; i++) {
//        dp[i] = 1;
//        for (int j = 1; j < i; j++) {
//            if (arr[j] < arr[i] && dp[i] < dp[j] + 1) {
//                dp[i] = dp[j] + 1;
//            }
//        }
//    }
//
//    int ans = 0;
//
//    for (int i = 1; i <= n; i++) {
//        if (ans < dp[i])
//            ans = dp[i];
//    }
//
//    cout << ans << '\n';
//
//    return 0;
//}
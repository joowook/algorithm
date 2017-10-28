//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int dp[1001][3];
//int arr[1001][4];
//
//int main(void) {
//    int n;
//    cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= 3; j++) {
//            cin >> arr[i][j];
//        }
//    }
//
//    dp[1][0] = arr[1][1];
//    dp[1][1] = arr[1][2];
//    dp[1][2] = arr[1][3];
//
//    for (int i = 2; i <= n; i++) {
//        dp[i][0] = min(dp[i - 1][1],dp[i - 1][2]) + arr[i][1];
//        dp[i][1] = min(dp[i - 1][0],dp[i - 1][2]) + arr[i][2];
//        dp[i][2] = min(dp[i - 1][0],dp[i - 1][1]) + arr[i][3];
//    }
//
//    cout << min(min(dp[n][0], dp[n][1]), dp[n][2]) << '\n';
//
//    return 0;
//}
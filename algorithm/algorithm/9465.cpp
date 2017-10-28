//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main(void) {
//    int T;
//
//    cin >> T;
//
//    while (T--) {
//        int n;
//        cin >> n;
//
//        vector <int[3]> dp(n + 1); //dp[n+1][3]
//        int arr[2][100001] = { 0 };
//
//        for (int i = 0; i < 2; i++) {
//            for (int j = 0; j < n; j++) {
//                cin >> arr[i][j];
//            }
//        }
//        dp[1][1] = arr[1][0];
//        dp[1][2] = arr[0][0];
//        for (int i = 2; i <= n; i++) {
//            dp[i][0] = max(max(dp[i - 1][0], dp[i - 1][1]), dp[i - 1][2]);
//            dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + arr[1][i-1];
//            dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + arr[0][i-1];
//        }
//
//        cout << max(max(dp[n][0], dp[n][1]), dp[n][2]) << '\n';
//    }
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main(void) {
//    int dp[41][2] = { 0 };
//    int T;
//
//    dp[0][0] = 1;
//    dp[0][1] = 0;
//    dp[1][0] = 0;
//    dp[1][1] = 1;
//
//    cin >> T;
//    while (T--) {
//        int n;
//        cin >> n;
//       
//        for (int i = 2; i <= n; i++) {
//            if (dp[n][0] > 0 || dp[n][1] > 0)
//                break;
//            if (dp[i][0] > 0 || dp[n][1] > 0)
//                continue;
//            else {
//                dp[i][0] = dp[i - 1][0] + dp[i - 2][0];
//                dp[i][1] = dp[i - 1][1] + dp[i - 2][1];
//            }
//        }
//
//        cout << dp[n][0] << " " << dp[n][1] << '\n';
//    }
//
//    return 0;
//}
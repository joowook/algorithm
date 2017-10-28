//#include <iostream>
//using namespace std;
//
//int main(void) {
//    int T;
//
//    cin >> T;
//
//    long long dp[101] = { 0 };
//
//    dp[1] = dp[2] = dp[3] = 1;
//   // dp[4] = dp[5] = 2;
//    
//    int n;
//
//    while (T--) {
//        cin >> n;
//       /* for (int i = 6; i <= n; i++) {
//            dp[i] = dp[i - 1] + dp[i - 5];
//        }
//*/
//        for (int i = 3; i <= n; i++) {
//            dp[i] = dp[i - 2] + dp[i - 3];
//        }
//
//        cout << dp[n] << '\n';
//        //printf("%lld\n", dp[n]);
//        
//    }
//
//    return 0;
//}
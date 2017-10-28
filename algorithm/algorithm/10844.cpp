//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(void) {
//    int N;
//    cin >> N;
//
//   // int dp[101][10];
//    vector <int[10]> dp(N+1);
//
//    for (int i = 1; i <= 9; i++) {
//        dp[1][i] = 1;
//    }
//    for (int i = 2; i <= N; i++) {
//        for (int j = 0; j <= 9; j++) {
//            if (j - 1 >= 0)
//                dp[i][j] += dp[i - 1][j - 1];
//            if (j + 1 <= 9)
//                dp[i][j] += dp[i - 1][j + 1];
//            dp[i][j] %= 1000000000;
//        }
//    }
//    long long ans = 0;
//    for (int i = 0; i <= 9; i++) {
//        ans += dp[N][i];
//        ans %= 1000000000;
//    }
//
//    cout << ans;
//
//    return 0;
//}
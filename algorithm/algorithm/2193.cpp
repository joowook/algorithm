//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(void) {
//    int N;
//    long long dp[91] = { 0 };
//
//    //vector <long long> dp(91); // 0, 1, 2 일 때 예외처리해두센
//    cin >> N;
//    dp[1] = dp[2] = 1;
//
//    for (int i = 3; i <= N; i++) {
//        dp[i] = dp[i - 1] + dp[i - 2];
//    }
//
//    cout << dp[N];
//
//    getchar();
//    getchar();
//
//
//    return 0;
//}
//
//
//    //int N;
//    ////long long dp[91] = { 0 };
//    //
//    //cin >> N;
//    //vector <long long[2]> dp(N+1);
//
//    //if (N >= 1) {
//    //    dp[1][0] = 0;
//    //    dp[1][1] = 1;
//    //}
//    //if (N >= 2) {
//    //    dp[2][0] = 1;
//    //    dp[2][1] = 0;
//    //}
//    //for (int i = 3; i <= N; i++) {
//    //    dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
//    //    dp[i][1] = dp[i - 1][0];
//    //}
//
//    //cout << dp[N][0] + dp[N][1];
//
//    //return 0;
////}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(void) {
//    string s;
//    int mod = 1000000;
//    int dp[5001] = { 0 };
//
//    cin >> s;
//
//    int n = s.size();
//    s = " " + s;
//
//    dp[0] = 1;
//    for (int i = 1; i <= n; i++) {
//        int x = s[i] - '0';
//        if (x >= 1 && x <= 9) {
//            dp[i] += dp[i - 1];
//            dp[i] %= mod;
//        }
//
//        if (i == 1)
//            continue;
//
//        if (s[i - 1] == '0')
//            continue;
//
//        x = (s[i - 1] - '0') * 10 + s[i] - '0';
//
//        if (x >= 10 && x <= 26) {
//            dp[i] += dp[i - 2];
//            dp[i] %= mod;
//        }
//    }
//
//    cout << dp[n];
//
//    return 0;
//}
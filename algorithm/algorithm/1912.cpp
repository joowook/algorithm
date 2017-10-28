//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(void) {
//    int n;
//
//    cin >> n;
//
//    vector <int> a(n + 1);
//    vector <int> dp(n + 1);
//
//    for (int i = 1; i <= n; i++) {
//        cin >> a[i];
//    }
//
//    for (int i = 1; i <= n; i++) {
//        dp[i] = a[i];
//        if (dp[i] < dp[i - 1] + a[i]) {
//            dp[i] = dp[i - 1] + a[i];
//        }
//    }
//
//    int ans = dp[1];
//    for (int i = 2; i <= n; i++) {
//        if (ans < dp[i])
//            ans = dp[i];
//    }
//
//    cout << ans << '\n';
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main(void) {
//    int N;
//    int a[1001] = { 0 };
//    int dp[1001] = { 0 };
//
//    cin >> N;
//
//    for (int i = 1; i <= N; i++) {
//        cin >> a[i];
//    }
//
//    for (int i = N; i>=1; i--) {
//        dp[i] = 1;
//        for (int j = N; j > i; j--) {
//            if (a[i] > a[j] && dp[i] < dp[j] + 1) {
//                dp[i] = dp[j] + 1;
//            }
//        }
//    }
//
//    int max = 0;
//    for (int i = 1; i <= N; i++) {
//        if (max < dp[i]) {
//            max = dp[i];
//        }
//    }
//
//    cout << max;
//
//    return 0;
//}
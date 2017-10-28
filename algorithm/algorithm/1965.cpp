//#include <iostream>
//using namespace std;
//
//int main(void) {
//    int n;
//    int a[1001] = { 0 };
//    int dp[1001] = { 0 };
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++)
//        scanf("%d", &a[i]);
//
//    for (int i = 0; i < n; i++) {
//        dp[i] = 1;
//        for (int j = 0; j < i; j++) {
//            if (a[i] > a[j] && dp[i] < dp[j] + 1) {
//                dp[i] = dp[j] + 1;
//            }
//        }
//    }
//
//    int ans = dp[0];
//
//    for (int i = 1; i < n; i++) {
//        if (ans < dp[i])
//            ans = dp[i];
//    }
//
//    printf("%d", ans);
//
//    return 0;
//}
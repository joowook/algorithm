//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int dp[5001];
//
//int main(void) {
//    int n = 0;
//
//    scanf("%d", &n);
//    dp[3] = 1;
//    dp[4] = -1;
//    dp[5] = 1;
//    for (int i = 6; i <= n; i++) {
//        if (dp[i - 3] <=0 && dp[i - 5] <=0)
//            dp[i] = -1;
//        else if (dp[i - 3] <= 0) {
//            dp[i] = dp[i - 5] + 1;
//        }
//        else if (dp[i - 5] <= 0) {
//            dp[i] = dp[i - 3] + 1;
//        }
//        else
//            dp[i] = min(dp[i - 3], dp[i - 5]) + 1;
//    }
//
//    printf("%d", dp[n]);
//
//    return 0;
//}
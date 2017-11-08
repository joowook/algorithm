//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int dp[1001][1001];
//int main(void) {
//    int n, k;
//
//    scanf("%d %d", &n, &k);
//
//    k = min(n - k, k);
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 0; j <= min(i, k); j++) {
//            if (j == 0 || i == j)
//                dp[i][j] = 1;
//            else 
//                dp[i][j] = ((dp[i - 1][j - 1]%10007) + dp[i - 1][j]%10007)%10007;
//        }
//    }
//
//    printf("%d", dp[n][k]);
//
//    return 0;
//}
//
//
////#include <iostream>
////using namespace std;
////
////int dp[1001][1001];
////int dfs(int n, int k) {
////    if (k == 0 || n == k)
////        return 1;
////    if (dp[n][k] > 0) {
////        return dp[n][k];
////    }
////    else {
////        dp[n][k] = ((dfs(n - 1, k - 1)%10007) + dfs(n - 1, k)%10007)%10007;
////    }
////
////    return dp[n][k];
////}
////int main(void) {
////    int n, k;
////
////    scanf("%d %d", &n, &k);
////
////    int ans = dfs(n, k);
////    printf("%d", ans);
////
////    return 0;
////}
//#include <iostream>
//using namespace std;
//
//int a[301][301];
//int dp[301][301];
//int main(void) {
//    int N, M, K;
//
//    scanf("%d %d", &N, &M);
//
//    for (int i = 1; i <= N; i++)
//        for (int j = 1; j <= M; j++)
//            scanf("%d", &a[i][j]);
//    scanf("%d", &K);
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            if (i - 1 >= 1) {
//                dp[i][j] += dp[i - 1][j];
//            }
//            if (j - 1 >= 1) {
//                dp[i][j] += dp[i][j - 1];
//            }
//            if (i - 1 >= 1 && j - 1 >= 1) {
//                dp[i][j] -= dp[i - 1][j - 1];
//            }
//            dp[i][j] += a[i][j];
//        }
//    }
//
//    
//    while (K--) {
//        int ans = 0;
//        int x1, y1, x2, y2;
//        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//        ans = dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1];
//        printf("%d\n", ans);
//    }
//
//    return 0;
//}
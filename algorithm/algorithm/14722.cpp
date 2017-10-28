//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int a[1001][1001];
//int dp[1001][1001][3];
//int tmp[3];
//
//int main(void) {
//    int N;
//    scanf("%d", &N);
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            scanf("%d", &a[i][j]);
//        }
//    }
//
//    //dp[n][n][k] n,n 자리가 k우유 일때 최대 마신 우유의 수 dp[0]=딸기, dp[1] = 초코, dp[3]= 바나나
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            int milk = a[i][j];
//            int a1, b, c,aa,bb,cc;
//            if (i != 1) {
//                milk == 0 && dp[i - 1][j][1] <= dp[i - 1][j][2] ? dp[i][j][0] = dp[i - 1][j][2] + 1 : dp[i][j][0] = dp[i - 1][j][0];
//                milk == 1 && dp[i - 1][j][2] < dp[i - 1][j][0] ? dp[i][j][1] = dp[i - 1][j][0] + 1 : dp[i][j][1] = dp[i - 1][j][1];
//                milk == 2 && dp[i - 1][j][0] < dp[i - 1][j][1] ? dp[i][j][2] = dp[i - 1][j][1] + 1 : dp[i][j][2] = dp[i - 1][j][2];
//                a1 = dp[i][j][0];
//                b = dp[i][j][1];
//                c = dp[i][j][2];
//            }
//            
//            if (j != 1) {
//                milk == 0 && dp[i][j][1] <= dp[i][j - 1][2] ? tmp[0] = dp[i][j - 1][2] + 1 : tmp[0] = dp[i][j - 1][0];
//                milk == 1 && dp[i][j][2] < dp[i][j - 1][0] ? tmp[1] = dp[i][j - 1][0] + 1 : tmp[1] = dp[i][j - 1][1];
//                milk == 2 && dp[i][j][0] < dp[i][j - 1][1] ? tmp[2] = dp[i][j - 1][1] + 1 : tmp[2] = dp[i][j - 1][2];
//                aa = tmp[0];
//                bb = tmp[1];
//                cc = tmp[2];
//            }
//            if (dp[i][j][0] < tmp[0]) {
//                dp[i][j][0] = tmp[0];
//            }
//            if (dp[i][j][1] < tmp[1]) {
//                dp[i][j][1] = tmp[1];
//            }
//            if (dp[i][j][2] < tmp[2]) {
//                dp[i][j][2] = tmp[2];
//            }
//            if (i == 1 && j == 1 && milk == 0)
//                dp[i][j][0] = 1;
//            tmp[0] = tmp[1] = tmp[2] = 0;
//        }
//    }
//
//    int ans = max(max(dp[N][N][0], dp[N][N][1]), dp[N][N][2]);
//    
//    printf("%d", ans);
//
//    return 0;
//}
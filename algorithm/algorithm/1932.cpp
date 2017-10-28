//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int a[501][501];
//int dp[501][501];
//int main(void) {
//    int n;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j <= i; j++) {
//            scanf("%d", &a[i][j]);
//        }
//    }
//
//    dp[0][0] = a[0][0];
//    for (int i = 1; i < n; i++) {
//        for (int j = 0; j <= i; j++) {
//            dp[i][j] = dp[i - 1][j];
//            if (j != 0) {
//                if (dp[i - 1][j - 1] > dp[i][j])
//                    dp[i][j] = dp[i - 1][j - 1];
//            }
//            dp[i][j] += a[i][j];
//        }
//    }
//
//    //int max = 0; //<< 이것보다 아래처럼 하셈
//    int max = dp[n-1][0];
//
//    for (int i = 1; i < n; i++) {
//        if (max < dp[n - 1][i]) {
//            max = dp[n - 1][i];
//        }
//    }
//
//    printf("%d", max);
//
//    return 0;
//}
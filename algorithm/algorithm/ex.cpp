//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int a[501][501];
//int dp[501][501];
//
//int main(void) {
//	int n;
//
//	scanf("%d", &n);
//
//	for (int i = 0; i<n; i++) {
//		for (int j = 0; j < i+1; j++) {
//			scanf("%d", &a[i][j]);
//		}
//	}
//	dp[0][0] = a[0][0];
//
//	for (int i = 1; i < n; i++) {
//		for (int j = 0; j < i + 1; j++) {
//			if (j == 0) {
//				dp[i][j] = dp[i - 1][j] + a[i][j];
//			}
//			else {
//				dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + a[i][j];
//			}
//		}
//	}
//
//	int ans = 0;
//
//	for (int i = 0; i < n; i++) {
//		ans = max(ans, dp[n - 1][i]);
//	}
//
//	printf("%d\n", ans);
//
//	return 0;
//}
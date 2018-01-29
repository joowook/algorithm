//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//#define MAX 2000000000
//int Answer;
//int dp[200001][2];
//int cost[200001][2];
//
//int main(int argc, char** argv)
//{
//	int T, test_case;
//
//	scanf("%d", &T);
//
//	for (test_case = 0; test_case < T; test_case++)
//	{
//		int n, x = 0;
//		bool flag = true;
//		scanf("%d", &n);
//
//		Answer = 0;
//
//		int now;
//
//		for (int i = 1; i <= n; i++) {
//			scanf("%d", &now);
//
//			if (i == 1) {
//				dp[i][0] = 1;
//				dp[i][1] = 0;
//				cost[i][0] = MAX;
//				cost[i][1] = now;
//				continue;
//			}
//			if (cost[i - 1][0] > now) {
//				dp[i][0] = dp[i - 1][1] + 1;
//				cost[i][1] = now;
//			}
//			else {
//				dp[i][0] = dp[i - 1][0];
//				cost[i][1] = cost[i - 1][1];
//			}
//
//			if (cost[i - 1][1] < now) {
//				dp[i][1] = dp[i - 1][0] + 1;
//				cost[i][0] = now;
//			}
//			else {
//				dp[i][1] = dp[i - 1][1];
//				cost[i][0] = cost[i - 1][0];
//			}
//
//		}
//
//		Answer = max(dp[n][0], dp[n][1]);
//		if (Answer % 2 == 1) {
//			Answer -= 1;
//		}
//		printf("Case #%d\n", test_case + 1);
//		printf("%d\n", Answer);
//	}
//
//	return 0;
//}
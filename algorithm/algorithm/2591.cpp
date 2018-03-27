//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int dp[41][2];
//
//int main(void) {
//	string s;
//
//	cin >> s;
//
//	if (s.size() == 1) {
//		if (s[0] == '0') {
//			printf("0");
//		}
//		else {
//			printf("1");
//		}
//		return 0;
//	}
//	dp[0][0] = 1; // 여길 마지막으로 1개 연속
//	dp[0][1] = 0; // 여길 마지막으로 2개 연속
//
//	for (int i = 1; i < s.size(); i++) {
//		int x = s[i - 1] - '0';
//		int y = s[i] - '0';
//		int tmp = 10 * x + y;
//
//		if (tmp % 10 == 0) {
//			dp[i][0] = 0;
//			dp[i][1] = dp[i - 1][0];
//		}
//		else if (tmp <= 34) {
//			dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
//			dp[i][1] = dp[i - 1][0];
//		}
//		else {
//			dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
//			dp[i][1] = 0;
//		}
//	}
//
//	int ans = dp[s.size() - 1][0] + dp[s.size() - 1][1];
//
//	printf("%d\n", ans);
//
//	return 0;
//}
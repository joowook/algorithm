//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//
//#define IMPOSSIBLE (-987654321)
//
//int bike[1001][2];
//int run[1001][2];
//int dp[1001][100001];
//int ans = 0;
//int N, K;
//
//int go(int cnt, int time) {
//	if (time > K) {
//		return IMPOSSIBLE;
//	}
//
//	if (cnt == N) {
//		return 0;
//	}
//
//	int &val = dp[cnt][time];
//
//	if (val != -1) {
//		return val;
//	}
//	
//	return val = max(run[cnt][1] + go(cnt + 1, time + run[cnt][0]), bike[cnt][1] + go(cnt + 1, time + bike[cnt][0]));
//}
//
//int main(void) {
//	scanf("%d %d", &N, &K);
//
//	for (int i = 0; i < N; i++) { // 0 시간, 1 모금액
//		scanf("%d %d %d %d", &run[i][0], &run[i][1], &bike[i][0], &bike[i][1]);
//	}
//	memset(dp, -1, sizeof(dp));
//
//	printf("%d\n", go(0, 0));
//
//	return 0;
//}
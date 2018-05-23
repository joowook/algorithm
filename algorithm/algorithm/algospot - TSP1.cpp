//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//#define MAX 2000000000
//double a[8][8];
//double ans = MAX;
//bool visit[8];
//
//void go(int N, int now, double dist, int cnt) {
//	if (N == cnt + 1) {
//		ans = min(ans, dist);
//
//		return;
//	}
//
//	if (dist > ans) {
//		return;
//	}
//
//	for (int i = 0; i < N; i++) {
//		if (!visit[i]) {
//			visit[i] = true;
//			go(N, i, dist+a[now][i], cnt+1);
//			visit[i] = false;
//		}
//	}
//
//
//}
//
//int main(void) {
//	int C;
//
//	scanf("%d", &C);
//
//	while (C--) {
//		int N;
//
//		ans = MAX; // 이거 때문에 틀림
//		scanf("%d", &N);
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				scanf("%lf", &a[i][j]);
//			}
//		}
//
//		for (int i = 0; i < N; i++) {
//			visit[i] = true;
//			go(N, i, 0, 0);
//			visit[i] = false;
//		}
//
//		printf("%.10lf\n", ans);
//	}
//
//	return 0;
//}
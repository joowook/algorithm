//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//int a[8][8];
//bool visit[8][8];
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//int ans = 0;
//vector<pair<int, int>> start;
//int N, K;
//
//int go(int x, int y) {
//	int cnt = 0;
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//
//		if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
//			if (!visit[nx][ny] && a[nx][ny]<a[x][y]) {
//				visit[nx][ny] = true;
//				cnt = max(cnt, 1 + go(nx, ny));
//				visit[nx][ny] = false;
//			}
//		}
//	}
//
//	return cnt;
//}
//
//int main(void) {
//	int T;
//
//	scanf("%d", &T);
//
//	for (int test_case = 1; test_case <= T; test_case++) {
//		int Max = 0;
//
//		start.clear();
//		ans = 0;
//		scanf("%d %d", &N, &K);
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				scanf("%d", &a[i][j]);
//				Max = max(Max, a[i][j]);
//			}
//		}
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				if (a[i][j] == Max) {
//					start.push_back(make_pair(i, j));
//				}
//			}
//		}
//
//		for (int i = 0; i < start.size(); i++) {
//			for (int j = 0; j < N; j++) {
//				for (int k = 0; k < N; k++) {
//					for (int kk = 1; kk <= K; kk++) { // 0은 젤끝에껄 1빼고 이렇게하면 무조건 1이 더 갈수있거나 같아서 안해도됨
//						if (start[i].first == j && start[i].second == k) {
//							continue;
//						}
//
//						a[j][k] -= kk;
//						visit[start[i].first][start[i].second] = true;
//						ans = max(ans, 1 + go(start[i].first, start[i].second));
//						visit[start[i].first][start[i].second] = false;
//						a[j][k] += kk;
//					}
//				}
//			}
//		}
//
//		printf("#%d %d\n", test_case, ans);
//	}
//
//	return 0;
//}
//#include <iostream>
//#include <cstring>
//#include <queue>
//using namespace std;
//
//#define KK(x) (x)*(x) + (x-1)*(x-1)
//int a[20][20];
//int visit[20][20];
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//int N, M;
//
//int go(int x, int y) {
//	int ans = 1;
//	int house;
//	house = a[x][y];
//	visit[x][y] = 1;
//
//	queue <pair<int, int>> q;
//	q.push(make_pair(x, y));
//	//ans = house;
//
//	int k = 0;
//
//	while (!q.empty()) {
//		x = q.front().first;
//		y = q.front().second;
//		q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//
//			if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
//				if (visit[nx][ny] == 0) {
//					if (a[nx][ny] == 1) {
//						house++;
//					}
//					visit[nx][ny] = k = visit[x][y] + 1;
//					q.push(make_pair(nx, ny));
//				}
//			}
//		}
//
//		if (KK(k) <= house * M) {
//			ans = house;
//		}
//	}
//
//	return ans;
//}
//
//int main(void) {
//	int T, ans;
//
//	scanf("%d", &T);
//
//	for (int test_case = 1; test_case <= T; test_case++) {
//		ans = 1;
//
//		scanf("%d %d", &N, &M);
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				scanf("%d", &a[i][j]);
//			}
//		}
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//
//				ans = max(ans, go(i, j));
//
//				memset(visit, false, sizeof(visit));
//			}
//		}
//
//		printf("#%d %d\n", test_case, ans);
//	}
//
//
//	return 0;
//}
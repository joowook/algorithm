//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//
//int a[51][51];
//bool check[51][51];
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int M, N, K;
//
//void bfs(int x, int y) {
//	check[x][y] = true;
//
//	queue <pair<int,int>> q;
//	q.push(make_pair(x, y));
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
//			if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
//				if (check[nx][ny] == false && a[nx][ny] == 1) {
//					check[nx][ny] = true;
//					q.push(make_pair(nx, ny));
//				}
//			}
//		}
//	}
//}
//
//void dfs(int x, int y) {
//	check[x][y] = true;
//
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//
//		if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
//			if (check[nx][ny] == false && a[nx][ny] == 1) {
//				dfs(nx, ny);
//			}
//		}
//	}
//	
//}
//
//int main(void) {
//	int T;
//
//	scanf("%d", &T);
//
//	while (T--) {
//		scanf("%d %d %d", &M, &N, &K);
//		memset(check, false, sizeof(check));
//		memset(a, 0, sizeof(a));
//
//		int x, y;
//
//		for (int i = 0; i < K; i++) {
//			scanf("%d %d", &x, &y);
//
//			a[x][y] = 1;
//		}
//		int ans = 0;
//
//		for (int i = 0; i < M; i++) {
//			for (int j = 0; j < N; j++) {
//				if (check[i][j] == false && a[i][j] == 1) {
//					ans++;
//					dfs(i, j);
//					//bfs(i, j);
//				}
//			}
//		}
//
//		printf("%d\n", ans);
//	}
//
//	return 0;
//}
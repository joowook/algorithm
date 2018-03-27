//#include <iostream>
//using namespace std;
//
//int a[8][8];
//int ans = 0;
//int N, M;
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int check[8][8];
//
//void go(int y, int x) {
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//
//		if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
//			if (a[ny][nx] == 0 && check[ny][nx] == 0) {
//				check[ny][nx] = 1;
//				go(ny, nx);
//				//check[ny][nx] = 0;
//			}
//		}
//	}
//}
//
//void dfs(int y, int x, int cnt) {
//	if (cnt == 3) {
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				if (a[i][j] == 2) {
//					go(i, j);
//				}
//			}
//		}
//		int tmp = 0;
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				if (a[i][j] == 0 && check[i][j] == 0) {
//					tmp++;
//				}
//			}
//		}
//		if (ans < tmp) {
//			ans = tmp;
//		}
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				if (a[i][j] == 0) {
//					check[i][j] = 0;
//				}
//			}
//		}
//		
//	}
//	else {
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				if (a[i][j] == 0) {
//					a[i][j] = 1;
//					dfs(i, j, cnt + 1);
//					a[i][j] = 0;
//				}
//			}
//		}
//	}
//}
//
//int main(void) {
//	scanf("%d %d", &N, &M);
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			scanf("%d", &a[i][j]);
//			if (a[i][j] == 2) {
//				check[i][j] = 1;
//			}
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (a[i][j] == 0) {
//				a[i][j] = 1;
//				dfs(i, j, 1);
//				a[i][j] = 0;
//			}
//		}
//	}
//
//	printf("%d\n", ans);
//
//	return 0;
//}
//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//
//int a[50][50];
//bool visit[50][50];
//int dx[4] = { -1,1,0,0 }; // ╩С го аб ©Л
//int dy[4] = { 0,0,-1,1 };
//int N, M, R, C, L;
//int ans = 0;
//int rot[8][4];
//
//struct Point {
//	int x, y, cnt;
//
//	Point(int x2, int y2, int cnt2) {
//		x = x2;
//		y = y2;
//		cnt = cnt2;
//	}
//};
//void bfs(int x, int y) {
//	ans++;
//	queue<Point>q;
//	q.push(Point(x,y,1));
//	visit[x][y] = true;
//
//	while (!q.empty()) {
//		x = q.front().x;
//		y = q.front().y;
//		int cnt = q.front().cnt;
//		if (cnt == L) {
//			break;
//		}
//		q.pop();
//
//		if (a[x][y] == 1) {
//			for (int i = 0; i < 4; i++) {
//				int nx = x + dx[i];
//				int ny = y + dy[i];
//
//				if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
//					if (rot[a[x][y]][i] & (1 << a[nx][ny])) {
//						if (!visit[nx][ny]) {
//							visit[nx][ny] = true;
//							ans++;
//							q.push(Point(nx, ny, cnt + 1));
//						}
//					}
//				}
//			}
//		}
//		else if (a[x][y] == 2) {
//			for (int i = 0; i < 4; i++) {
//				if (i == 2 || i == 3) {
//					continue;
//				}
//				int nx = x + dx[i];
//				int ny = y + dy[i];
//
//				if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
//					if (rot[a[x][y]][i] & (1 << a[nx][ny])) {
//						if (!visit[nx][ny]) {
//							visit[nx][ny] = true;
//							ans++;
//							q.push(Point(nx, ny, cnt + 1));
//						}
//					}
//				}
//			}
//		}
//		else if (a[x][y] == 3) {
//			for (int i = 0; i < 4; i++) {
//				if (i == 0 || i == 1) {
//					continue;
//				}
//				int nx = x + dx[i];
//				int ny = y + dy[i];
//
//				if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
//					if (rot[a[x][y]][i] & (1 << a[nx][ny])) {
//						if (!visit[nx][ny]) {
//							visit[nx][ny] = true;
//							ans++;
//							q.push(Point(nx, ny, cnt + 1));
//						}
//					}
//				}
//			}
//		}
//		else if (a[x][y] == 4) {
//			for (int i = 0; i < 4; i++) {
//				if (i == 1 || i == 2) {
//					continue;
//				}
//
//				int nx = x + dx[i];
//				int ny = y + dy[i];
//
//				if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
//					if (rot[a[x][y]][i] & (1 << a[nx][ny])) {
//						if (!visit[nx][ny]) {
//							visit[nx][ny] = true;
//							ans++;
//							q.push(Point(nx, ny, cnt + 1));
//						}
//					}
//				}
//			}
//		}
//		else if (a[x][y] == 5) {
//			for (int i = 0; i < 4; i++) {
//				if (i == 0 || i == 2) {
//					continue;
//				}
//
//				int nx = x + dx[i];
//				int ny = y + dy[i];
//
//				if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
//					if (rot[a[x][y]][i] & (1 << a[nx][ny])) {
//						if (!visit[nx][ny]) {
//							visit[nx][ny] = true;
//							ans++;
//							q.push(Point(nx, ny, cnt + 1));
//						}
//					}
//				}
//			}
//		}
//		else if (a[x][y] == 6) {
//			for (int i = 0; i < 4; i++) {
//				if (i == 0 || i == 3) {
//					continue;
//				}
//
//				int nx = x + dx[i];
//				int ny = y + dy[i];
//
//				if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
//					if (rot[a[x][y]][i] & (1 << a[nx][ny])) {
//						if (!visit[nx][ny]) {
//							visit[nx][ny] = true;
//							ans++;
//							q.push(Point(nx, ny, cnt + 1));
//						}
//					}
//				}
//			}
//		}
//		else if (a[x][y] == 7) {
//			for (int i = 0; i < 4; i++) {
//				if (i == 1 || i == 3) {
//					continue;
//				}
//
//				int nx = x + dx[i];
//				int ny = y + dy[i];
//
//				if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
//					if (rot[a[x][y]][i] & (1 << a[nx][ny])) {
//						if (!visit[nx][ny]) {
//							visit[nx][ny] = true;
//							ans++;
//							q.push(Point(nx, ny, cnt + 1));
//						}
//					}
//				}
//			}
//		}
//		
//	}
//}
//
//int main(void) {
//	int T;
//
//	scanf("%d", &T);
//	rot[1][0] |= 1 << 1;
//	rot[1][0] |= 1 << 2;
//	rot[1][0] |= 1 << 5;
//	rot[1][0] |= 1 << 6;
//	rot[1][1] |= 1 << 1;
//	rot[1][1] |= 1 << 2;
//	rot[1][1] |= 1 << 4;
//	rot[1][1] |= 1 << 7;
//	rot[1][2] |= 1 << 1;
//	rot[1][2] |= 1 << 3;
//	rot[1][2] |= 1 << 4;
//	rot[1][2] |= 1 << 5;
//	rot[1][3] |= 1 << 1;
//	rot[1][3] |= 1 << 3;
//	rot[1][3] |= 1 << 6;
//	rot[1][3] |= 1 << 7;
//	
//	rot[2][0] |= 1 << 1;
//	rot[2][0] |= 1 << 2;
//	rot[2][0] |= 1 << 5;
//	rot[2][0] |= 1 << 6;
//	rot[2][1] |= 1 << 2;
//	rot[2][1] |= 1 << 1;
//	rot[2][1] |= 1 << 4;
//	rot[2][1] |= 1 << 7;
//
//	rot[3][2] |= 1 << 1;
//	rot[3][2] |= 1 << 3;
//	rot[3][2] |= 1 << 4;
//	rot[3][2] |= 1 << 5;
//	rot[3][3] |= 1 << 1;
//	rot[3][3] |= 1 << 3;
//	rot[3][3] |= 1 << 6;
//	rot[3][3] |= 1 << 7;
//
//	rot[4][0] |= 1 << 1;
//	rot[4][0] |= 1 << 2;
//	rot[4][0] |= 1 << 5;
//	rot[4][0] |= 1 << 6;
//	rot[4][3] |= 1 << 1;
//	rot[4][3] |= 1 << 3;
//	rot[4][3] |= 1 << 6;
//	rot[4][3] |= 1 << 7;
//
//	rot[5][1] |= 1 << 1;
//	rot[5][1] |= 1 << 2;
//	rot[5][1] |= 1 << 4;
//	rot[5][1] |= 1 << 7;
//	rot[5][3] |= 1 << 1;
//	rot[5][3] |= 1 << 3;
//	rot[5][3] |= 1 << 6;
//	rot[5][3] |= 1 << 7;
//
//	rot[6][1] |= 1 << 1;
//	rot[6][1] |= 1 << 2;
//	rot[6][1] |= 1 << 4;
//	rot[6][1] |= 1 << 7;
//	rot[6][2] |= 1 << 1;
//	rot[6][2] |= 1 << 3;
//	rot[6][2] |= 1 << 4;
//	rot[6][2] |= 1 << 5;
//
//	rot[7][0] |= 1 << 1;
//	rot[7][0] |= 1 << 2;
//	rot[7][0] |= 1 << 5;
//	rot[7][0] |= 1 << 6;
//	rot[7][2] |= 1 << 1;
//	rot[7][2] |= 1 << 3;
//	rot[7][2] |= 1 << 4;
//	rot[7][2] |= 1 << 5;
//
//	for (int test_case = 1; test_case <= T; test_case++) {
//		scanf("%d %d %d %d %d", &N, &M, &R, &C, &L);
//		ans = 0;
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				scanf("%d", &a[i][j]);
//			}
//		}
//
//		memset(visit, false, sizeof(visit));
//
//		bfs(R, C);
//		printf("#%d %d\n", test_case, ans);
//	}
//
//	return 0;
//}
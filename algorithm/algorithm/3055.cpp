//#include <iostream>
//#include <queue>
//using namespace std;
//
//
//char a[50][50];
//int check[50][50];
//int R, C;
//int dx[4] = { -1, 1, 0, 0 };
//int dy[4] = { 0, 0, 1, -1 };
//int ans = 0;
//
//struct Point {
//	int x, y, cnt;
//
//	Point(int x2, int y2, int cnt2) {
//		x = x2;
//		y = y2;
//		cnt = cnt2;
//	}
//
//	Point() {}
//};
//
//void In_Water(int cnt) {
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			if (check[i][j] == cnt) {
//				for (int k = 0; k < 4; k++) {
//					int nx = i + dx[k];
//					int ny = j + dy[k];
//
//					if (nx >= 0 && nx < R && ny >= 0 && ny < C) {
//						if (a[nx][ny] == '.') {
//							a[nx][ny] = '*';
//							check[nx][ny] = cnt - 1;
//						}
//					}
//				}
//			}
//		}
//	}
//}
//
//void bfs(int x, int y) {
//	queue<Point> q;
//	q.push(Point(x, y, 1));
//
//	int Wcnt = 2;
//	In_Water(-1);
//
//	while (!q.empty()) {
//		x = q.front().x;
//		y = q.front().y;
//		int cnt = q.front().cnt;
//		if (Wcnt == cnt) {
//			In_Water(-cnt);
//			Wcnt++;
//		}
//		
//		q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//
//			if (nx >= 0 && nx < R && ny >= 0 && ny < C) {
//				if (check[nx][ny] == 0) {
//					if (a[nx][ny] == 'D') {
//						ans = cnt;
//						return;
//					}
//					if (a[nx][ny] == '.') {
//						q.push(Point(nx, ny, cnt + 1));
//						check[nx][ny] = cnt + 1;
//					}
//				}
//			}
//		}
//	}
//}
//
//int main(void) {
//	Point S, D;
//	scanf("%d %d", &R, &C);
//
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			scanf(" %c", &a[i][j]);
//			if (a[i][j] == '*') {
//				check[i][j] = -1;
//			}
//			else if (a[i][j] == 'S') {
//				S.x = i;
//				S.y = j;
//				check[i][j] = 1;
//			}
//			else if (a[i][j] == 'D') {
//				D.x = i;
//				D.y = j;
//			}
//		}
//	}
//
//	bfs(S.x, S.y);
//
//	if (ans == 0) {
//		printf("KAKTUS\n");
//	}
//	else {
//		printf("%d\n", ans);
//	}
//
//	return 0;
//}
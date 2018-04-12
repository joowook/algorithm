//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//#define UP 1
//#define DOWN 2
//#define LEFT 3
//#define RIGHT 4
//int a[100][100];
//int visit[100][100];
//
//int dx[5] = { 0, -1, 1, 0, 0 };
//int dy[5] = { 0, 0, 0, -1, 1 };
//
//struct Point {
//	int x, y, direction, cnt;
//
//	Point(int x2, int y2, int direction2, int cnt2) {
//		x = x2;
//		y = y2;
//		direction = direction2;
//		cnt = cnt2;
//	}
//};
//
//struct Compare {
//	int value, comp, direction; // 총 값, 그 중 가장 큰 값, 방향
//
//	Compare() {
//		value = comp = direction = 0;
//	}
//
//	Compare(int value2, int comp2, int direction2) {
//		direction = direction2;
//		comp = comp2;
//		value = value2;
//	}
//
//};
//
//Compare tmp[100][100];
//queue<Point> q;
//int N, M, K;
//int now = 0;
//int ans;
//
//void go() {
//	while (!q.empty()) {
//		int x = q.front().x;
//		int y = q.front().y;
//		int direction = q.front().direction;
//		int cnt = q.front().cnt;
//		q.pop();
//
//		if (cnt == M) {
//			while (!q.empty()) {
//				q.pop();
//			}
//			for (int i = 0; i < N; i++) {
//				for (int j = 0; j < N; j++) {
//					tmp[x][y].value = 0;
//					tmp[x][y].comp = 0;
//					tmp[x][y].direction = 0;
//				}
//			}
//			now = 0;
//
//			break;
//		}
//		if (cnt != now) {
//			for (int i = 0; i < N; i++) {
//				for (int j = 0; j < N; j++) {
//					if (visit[i][j] == -1) {
//						continue;
//					}
//					visit[i][j] = 0;
//				}
//			}
//			now = cnt;
//		}
//
//		int nx = x + dx[direction];
//		int ny = y + dy[direction];
//
//		if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
//			if (visit[nx][ny] == -1) { //빨간 곳
//				if (direction <= 2) {
//					direction = 3 - direction;
//				}
//				else {
//					direction = 7 - direction;
//				}
//
//				tmp[nx][ny] = Compare(a[x][y] / 2, a[x][y] / 2, direction);
//			}
//			else if(visit[nx][ny] == 0) { //안겹침
//				tmp[nx][ny] = Compare(a[x][y], a[x][y], direction);
//				visit[nx][ny] = 1;
//			}
//			else {
//				if (tmp[nx][ny].comp < a[x][y]) {
//					tmp[nx][ny].value += a[x][y];
//					tmp[nx][ny].comp = a[x][y];
//					tmp[nx][ny].direction = direction;
//				}
//				else {
//					tmp[nx][ny].value += a[x][y];
//				}
//			}
//		}
//
//		if (q.size() == 0) {
//			for (int i = 0; i < N; i++) {
//				for (int j = 0; j < N; j++) {
//					if (tmp[i][j].value > 0) {
//						a[i][j] = tmp[i][j].value;
//						q.push(Point(i, j, tmp[i][j].direction, cnt + 1));
//						tmp[i][j].value = 0;
//						tmp[i][j].comp = 0;
//						tmp[i][j].direction = 0;
//					}
//					else {
//						a[i][j] = 0;
//					}
//					
//				}
//			}
//
//
//		}
//
//	}
//}
//int main(void) {
//	int T;
//
//	scanf("%d", &T);
//
//	for (int test_case = 1; test_case <= T; test_case++) {
//		ans = 0;
//		scanf("%d %d %d", &N, &M, &K);
//	
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				if (i == 0 || i == N - 1) {
//					visit[i][j] = -1;
//				}
//				else if (j == 0 || j == N - 1) {
//					visit[i][j] = -1;
//				}
//				else {
//					visit[i][j] = 0;
//				}
//			}
//		}
//		
//		
//		for (int i = 0; i < K; i++) {
//			int x, y, num, direction;
//
//			scanf("%d %d %d %d", &x, &y, &num, &direction);
//			a[x][y] = num;
//			q.push(Point(x, y, direction, 0));
//		}
//
//		go();
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				ans += a[i][j];
//			}
//		}
//
//		memset(a, 0, sizeof(a));
//		printf("#%d %d\n", test_case, ans);
//	}
//
//
//	return 0;
//}
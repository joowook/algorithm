//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//#define Max 2000000000
//
//int a[8][8];
//int visit[8][8];
//int ans = Max;
//
//int dx[4] = { -1,0,1,0 };
//int dy[4] = { 0,1,0,-1 };
//
//struct Point {
//	int x, y;
//
//	Point(int x2, int y2) {
//		x = x2;
//		y = y2;
//	}
//};
//
//vector<Point> v;
//int N, M;
//
//void scan(int x, int y, int d) {
//	while (x >= 0 && x < N && y >= 0 && y < M && a[x][y] != 6) {
//		visit[x][y]++;
//		x += dx[d];
//		y += dy[d];
//	}
//}
//
//void unscan(int x, int y, int d) {
//	while (x >= 0 && x < N && y >= 0 && y < M && a[x][y] != 6) {
//		visit[x][y]--;
//		x += dx[d];
//		y += dy[d];
//	}
//}
//
//void go(int n) {
//	if (v.size() == n) {
//		int cc = 0;
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				if (visit[i][j] == 0) {
//					cc++;
//				}
//			}
//		}
//
//		ans = min(ans, cc);
//		return;
//	}
//
//	int x = v[n].x;
//	int y = v[n].y;
//
//	if (a[x][y] == 1) {
//		for (int i = 0; i < 4; i++) {
//			scan(x, y, i);
//			go(n + 1);
//			unscan(x, y, i);
//		}
//	}
//	else if (a[x][y] == 2) {
//		for (int i = 0; i < 2; i++) {
//			scan(x, y, i);
//			scan(x, y, 2 + i);
//			go(n + 1);
//			unscan(x, y, i);
//			unscan(x, y, 2 + i);
//		}
//	}
//	else if (a[x][y] == 3) {
//		for (int i = 0; i < 4; i++) {
//			scan(x, y, i);
//			scan(x, y, (i + 1) % 4);
//			go(n + 1);
//			unscan(x, y, i);
//			unscan(x, y, (i + 1) % 4);
//		}
//	}
//	else if (a[x][y] == 4) {
//		for (int i = 0; i < 4; i++) {
//			scan(x, y, i);
//			scan(x, y, (i + 1) % 4);
//			scan(x, y, (i + 2) % 4);
//			go(n + 1);
//			unscan(x, y, i);
//			unscan(x, y, (i + 1) % 4);
//			unscan(x, y, (i + 2) % 4);
//		}
//	}
//	else {
//		scan(x, y, 0);
//		scan(x, y, 1);
//		scan(x, y, 2);
//		scan(x, y, 3);
//		go(n + 1);
//		unscan(x, y, 0);
//		unscan(x, y, 1);
//		unscan(x, y, 2);
//		unscan(x, y, 3);
//	}
//}
//
//int main(void) {
//	scanf("%d %d", &N, &M);
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			scanf("%d", &a[i][j]);
//			if (a[i][j] >= 1 && a[i][j] <= 5) {
//				v.push_back(Point(i,j));
//				
//			}
//			if (a[i][j] != 0) {
//				visit[i][j] = 1;
//			}
//		}
//	}
//
//	go(0);
//
//	printf("%d\n", ans);
//	
//	return 0;
//}
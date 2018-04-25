//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//int dx[4] = { 1, 0,-1,0 };
//int dy[4] = { 0,-1,0,1 };
//
//int a[101][101];
//
//struct Point {
//	int x, y;
//
//	Point(int x, int y) {
//		this->x = x;
//		this->y = y;
//	}
//};
//
//vector<Point> v;
//
//bool check(int x, int y) {
//	if (a[y][x + 1] == 1 && a[y + 1][x] == 1 && a[y + 1][x + 1] == 1) {
//		return true;
//	}
//	
//	return false;
//}
//
//void go(int g) {
//	if (g == 0) {
//		return;
//	}
//	int last = v.size() - 1;
//
//	for (int i = last - 1; i >= 0; i--) {
//		int rx = abs(v[last].x - v[i].x);
//		int ry = abs(v[last].y - v[i].y);
//
//		if (v[last].x - v[i].x > 0 && v[last].y - v[i].y <= 0) { // 1, 2	
//			v.push_back(Point(v[last].x - ry, v[last].y - rx));
//			a[v[last].y - rx][v[last].x - ry] = 1;
//		}
//		else if (v[last].x - v[i].x <= 0 && v[last].y - v[i].y < 0) { // 3, 4
//			v.push_back(Point(v[last].x - ry, v[last].y + rx));
//			a[v[last].y + rx][v[last].x - ry] = 1;
//		}
//		else if (v[last].x - v[i].x < 0 && v[last].y - v[i].y >= 0) { // 5, 6
//			v.push_back(Point(v[last].x + ry, v[last].y + rx));
//			a[v[last].y + rx][v[last].x + ry] = 1;
//		}
//		else if (v[last].x - v[i].x >= 0 && v[last].y - v[i].y > 0) { // 7, 8
//			v.push_back(Point(v[last].x + ry, v[last].y - rx));
//			a[v[last].y - rx][v[last].x + ry] = 1;
//		}
//	}
//	
//	go(g - 1);
//}
//
//int main(void) {
//	int n;
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		int x, y, d, g;
//
//		scanf("%d %d %d %d", &x, &y, &d, &g);
//		v.clear();
//
//		v.push_back(Point(x, y));
//		a[y][x] = 1;
//		v.push_back(Point(x + dx[d], y + dy[d]));
//		a[y + dy[d]][x + dx[d]] = 1;
//
//		go(g);
//	}
//
//	int ans = 0;
//
//	for (int i = 0; i <= 99; i++) {
//		for (int j = 0; j <= 99; j++) {
//			if (a[i][j] == 1) {
//				if (check(j, i)) {
//					ans++;
//				}
//			}
//		}
//	}
//
//	printf("%d\n", ans);
//
//	return 0;
//}
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//struct Point {
//	int x, y;
//
//	Point(int x2, int y2) {
//		x = x2;
//		y = y2;
//	}
//	Point() {
//		x = 0;
//		y = 0;
//	}
//};
//
//int a[10][10];
//Point finish[2];
//
//
//int main(void) {
//	int T;
//
//	scanf("%d", &T);
//
//	for (int test_case = 1; test_case <= T; test_case++) {
//		int N, ans = 2000000000;
//		int cnt = 0;
//
//		scanf("%d", &N);
//		vector<Point> person;
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				scanf("%d", &a[i][j]);
//				if (a[i][j] == 1) {
//					person.push_back(Point(i, j));
//				}
//				else if (a[i][j] > 1) {
//					finish[cnt++] = Point(i, j);
//				}
//			}
//		}
//		int n = person.size();
//
//		for (int i = 0; i < n + 1; i++) { // 1ÀÇ °¹¼ö
//			vector<int> v(n, 0);
//			for (int j = n - 1; j >n - 1 - i; j--) {
//				v[j] = 1;
//			}
//		
//
//			do {
//				vector<int> distance0, distance1;
//				for (int j = 0; j < n; j++) {
//					if (v[j] == 0) {
//						distance0.push_back(abs(finish[0].x - person[j].x) + abs(finish[0].y - person[j].y));
//					}
//					else {
//						distance1.push_back(abs(finish[1].x - person[j].x) + abs(finish[1].y - person[j].y));
//					}
//				}
//
//				sort(distance0.begin(), distance0.end());
//				sort(distance1.begin(), distance1.end());
//				
//				cnt = 0;
//				int n0 = distance0.size();
//				int n1 = distance1.size();
//
//				if (n0 >= 4) {
//					for (int j = 0; j < n0 - 3; j++) {
//						distance0[j + 3] = max(distance0[j] + a[finish[0].x][finish[0].y], distance0[j + 3]);
//					}
//				}
//
//				if (n0 > 0) {
//					cnt = max(cnt, distance0[n0 - 1] + a[finish[0].x][finish[0].y]);
//				}
//
//				if (n1 >= 4) {
//					for (int j = 0; j < n1 - 3; j++) {
//						distance1[j + 3] = max(distance1[j] + a[finish[1].x][finish[1].y], distance1[j + 3]);
//					}
//				}
//
//				if (n1 > 0) {
//					cnt = max(cnt, distance1[n1 - 1] + a[finish[1].x][finish[1].y]);
//				}
//
//				ans = min(ans, cnt);
//
//			} while (next_permutation(v.begin(), v.end()));
//		}
//
//		printf("#%d %d\n", test_case, ans + 1);
//	}
//
//	return 0;
//}
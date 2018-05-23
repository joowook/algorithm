//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int a[35][15];
//int N, M, H;
//
//int go(int y, int x) {
//	if (y == H + 1) {
//		return x;
//	}
//
//	if (a[y][x - 1] == 1) {
//		return go(y + 1, x - 1);
//	}
//	else if (a[y][x] == 1) {
//		return go(y + 1, x + 1);
//	}
//	else {
//		return go(y + 1, x);
//	}
//}
//
//bool check() {
//	for (int i = 1; i <= N; i++) {
//		if (go(1, i) != i) {
//			return false;
//		}
//	}
//
//	return true;
//}
//
//int main(void) {
//	scanf("%d %d %d", &N, &M, &H);
//
//	for (int i = 0; i < M; i++) {
//		int x, y;
//
//		scanf("%d %d", &y, &x);
//
//		a[y][x] = 1; // 왼쪽 숫자
//	}
//
//	if (M == 0) {
//		printf("0\n");
//
//		return 0;
//	}
//
//	vector<pair<int, int>> can;
//
//	for (int i = 1; i <= H; i++) {
//		for (int j = 1; j < N; j++) {
//			if (a[i][j-1] == 0 && a[i][j] == 0 && a[i][j+1] == 0) {
//				can.push_back(make_pair(i, j));
//			}
//		}
//	}
//
//	int m = can.size();
//
//	/*if (m == 0) { // 이거때문에 틀림. 가로선을 그을 수 없다면 -1이라 생각했는데 처음에 안 긋고도 답이 나오면 답이 0인데 헷갈려서 잘못했음.
//		printf("-1\n");
//
//		return 0;
//	}*/
//
//	if (check()) {
//		printf("0\n");
//
//		return 0;
//	}
//
//	for (int i = 1; i <= 3; i++) {
//		vector<int> v(m);
//	
//		for (int j = m - 1; j > m - 1 - i; j--) {
//			if (j >= 0) {
//				v[j] = 1;
//			}
//			else {
//				printf("-1\n");
//
//				return 0;
//			}
//		}
//
//		do {
//			vector<pair<int, int>> tmp;
//
//			for (int t = 0; t < m; t++) {
//				if (v[t] == 1) {
//					if (a[can[t].first][can[t].second - 1] == 0 && a[can[t].first][can[t].second + 1] == 0) {
//						a[can[t].first][can[t].second] = 1; // 사다리 그려주기
//						tmp.push_back(can[t]);
//					}
//					else {
//						for (int tt = 0; tt < tmp.size(); tt++) {
//							a[tmp[tt].first][tmp[tt].second] = 0; // 지우기
//						}
//
//						break;
//					}
//				}
//
//				if (t == m - 1) {
//					if (check()) {
//						printf("%d\n", i);
//
//						return 0;
//					}
//					else {
//						for (int tt = 0; tt < (int)tmp.size(); tt++) {
//							a[tmp[tt].first][tmp[tt].second] = 0; // 지우기
//						}
//					}
//				}
//			}
//		} while (next_permutation(v.begin(), v.end()));
//	}
//
//	printf("-1\n");
//
//	return 0;
//}
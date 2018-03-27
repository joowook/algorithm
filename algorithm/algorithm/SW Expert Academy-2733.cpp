//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//int a[5][5];
//int dx[4] = { -1,0,1,0 };
//int dy[4] = { 0,1,0,-1 };
//int check[5][5];
//
//int go(int x, int y, bool flag) {
//	int ans = 0;
//
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//
//		if (nx >= 0 && nx < 5 && ny >= 0 && ny < 5) {
//			if (flag == true) { // 다음번 오르막
//				if (a[x][y] < a[nx][ny]) {
//					if (check[nx][ny] == 0) {
//						check[nx][ny] = 1;
//						int tmp = go(nx, ny, !flag) + 1;
//						ans = max(ans, tmp);
//						check[nx][ny] = 0;
//					}
//				}
//			}
//			else { // 다음번 내리막
//				if (a[x][y] > a[nx][ny]) {
//					if (check[nx][ny] == 0) {
//						check[nx][ny] = 1;
//						int tmp = go(nx, ny, !flag) + 1;
//						ans = max(ans, tmp);
//						check[nx][ny] = 0;
//					}
//				}
//			}
//		}
//
//	}
//
//	return ans;
//}
//int main(void) {
//	int T;
//
//	scanf("%d", &T);
//
//	while (T--) {
//		int C;
//		scanf("%d", &C);
//
//		for (int i = 0; i < 5; i++) {
//			for (int j = 0; j < 5; j++) {
//				scanf("%d", &a[i][j]);
//			}
//		}
//		int ans = 0;
//		for (int i = 0; i < 5; i++) {
//			for (int j = 0; j < 5; j++) {
//				check[i][j] = 1;
//				int tmp = go(i, j, 0); // 내리막 시작
//				ans = max(ans, tmp);
//				memset(check, 0, sizeof(check));
//
//				check[i][j] = 1;
//				tmp = go(i, j, 1); // 오르막 시작
//				ans = max(ans, tmp);
//				memset(check, 0, sizeof(check));
//			}
//		}
//
//		printf("#%d %d\n", C, ans + 1);
//	}
//
//	return 0;
//}
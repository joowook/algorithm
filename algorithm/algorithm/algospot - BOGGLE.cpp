//#include <iostream>
//#include <string>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//char a[5][5];
//int dx[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
//int dy[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
//int dp[5][5][11];
//
//bool go(int x, int y, string &s, int now) {
//	if (now + 1 == s.size()) {
//		return true;
//	}
//	if (dp[x][y][now] == 0) {
//		return false;
//	}
//
//	for (int i = 0; i < 8; i++) {
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//
//		if (nx >= 0 && nx < 5 && ny >= 0 && ny < 5) {
//			if (a[nx][ny] == s[now + 1]) {
//
//				dp[nx][ny][now + 1] = go(nx, ny, s, now + 1);
//
//				if (dp[nx][ny][now + 1]) {
//					return true;
//				}
//			}
//		}
//	}
//
//	return false;
//}
//
//bool check(string &s) {
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (s[0] == a[i][j]) {
//				memset(dp, -1, sizeof(dp));
//				if (go(i, j, s, 0)) {
//					return true;
//				}
//			}
//		}
//	}
//
//	return false;
//}
//
//int main(void) {
//	int C;
//
//	cin >> C;
//
//	while (C--) {
//		for (int i = 0; i < 5; i++) {
//			for (int j = 0; j < 5; j++) {
//				cin >> a[i][j];
//			}
//		}
//
//		int n;
//
//		cin >> n;
//
//		vector<string> s(n);
//
//		for (int i = 0; i < n; i++) {
//			cin >> s[i];
//		}
//
//		for (int i = 0; i < n; i++) {
//			if (check(s[i])) {
//				cout << s[i] << " " << "YES" << '\n';
//			}
//			else {
//				cout << s[i] << " " << "NO" << '\n';
//			}
//
//		}
//	}
//
//	return 0;
//}
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//#define BLACK '#'
//#define WHITE '.'
//
//char a[21][21];
//int check[21][21];
//int dy[4][3] = { { 0,0,1 },{ 0,0,1 },{ 0,1,1 },{ 0,1,1 } };
//int dx[4][3] = { { 0,1,0 },{ 0,1,1 },{ 0,0,-1 },{ 0,0,1 } };
//int H, W;
//
//void cover(int x, int y, int i) {
//	for (int j = 0; j < 3; j++) {
//		int nx = x + dx[i][j];
//		int ny = y + dy[i][j];
//
//		check[ny][nx] = true;
//	}
//}
//
//void uncover(int x, int y, int i) {
//	for (int j = 0; j < 3; j++) {
//		int nx = x + dx[i][j];
//		int ny = y + dy[i][j];
//
//		check[ny][nx] = false;
//	}
//}
//
//bool usage(int &x, int &y, int i) {
//	int cnt = 0;
//	for (int j = 0; j < 3; j++) {
//		int nx = x + dx[i][j];
//		int ny = y + dy[i][j];
//		if (nx >= 0 && nx < W && ny >= 0 && ny < H) {
//			if (!check[ny][nx] && a[ny][nx] == WHITE) {
//				cnt++;
//			}
//		}
//	}
//
//	if (cnt == 3) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//int go(int z) {
//	if (z == H*W) {
//		return 1;
//	}
//
//	int ans = 0;
//	int y = z / W;
//	int x = z % W;
//
//	if (check[y][x]) {
//		return go(z + 1);
//	}
//
//	for (int i = 0; i < 4; i++) {
//		if (usage(x, y, i)) {
//			cover(x, y, i);
//			ans += go(z + 1);
//			uncover(x, y, i);
//		}
//	}
//
//	return ans;
//}
//
//int main(void) {
//	int C;
//
//	scanf("%d", &C);
//
//	while (C--) {
//		scanf("%d %d", &H, &W);
//		int white_cnt = 0;
//		memset(check, false, sizeof(check));
//
//		for (int i = 0; i < H; i++) {
//			for (int j = 0; j < W; j++) {
//				cin >> a[i][j];
//				if (a[i][j] == WHITE) {
//					white_cnt++;
//				}
//				else if (a[i][j] == BLACK) {
//					check[i][j] = true;
//				}
//			}
//		}
//
//		if (white_cnt % 3 != 0) {
//			printf("0\n");
//			continue;
//		}
//
//		printf("%d\n", go(0));
//	}
//
//	return 0;
//}
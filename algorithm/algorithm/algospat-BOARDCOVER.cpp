//#include <iostream>
//#include <cstring>
//using namespace std;
//#define BLACK '#'
//#define WHITE '.'
//
//char a[20][21];
//bool check[20][20];
//int H, W;
//
//bool cover(int x, int y, int i, bool flag) {
//	if (i == 0) {
//		if (y + 1 < W && x + 1 < H) {
//			if (!flag || check[x][y + 1] == false && check[x + 1][y] == false) {
//				check[x][y + 1] = flag;
//				check[x + 1][y] = flag;
//				return true;
//			}
//		}
//	}
//	else if (i == 1) {
//		if (y + 1 < W && x + 1 < H) {
//			if (!flag || check[x][y + 1] == false && check[x + 1][y + 1] == false) {
//				check[x][y + 1] = flag;
//				check[x + 1][y + 1] = flag;
//				return true;
//			}
//		}
//	}
//	else if (i == 2) {
//		if (x + 1 < H && y + 1 < W) {
//			if (!flag || check[x + 1][y] == false && check[x + 1][y + 1] == false) {
//				check[x + 1][y] = flag;
//				check[x + 1][y + 1] = flag;
//				return true;
//			}
//		}
//	}
//	else {
//		if (x + 1 < H && y -1 >= 0 ) {
//			if (!flag || check[x + 1][y] == false && check[x + 1][y - 1] == false) {
//				check[x + 1][y] = flag;
//				check[x + 1][y - 1] = flag;
//				return true;
//			}
//		}
//	}
//
//	return false;
//}
//
//
//int go(int z, int cnt) {
//	if (z == H*W) {
//		return 1;
//	}
//
//	int ans = 0;
//
//	int x = z / W;
//	int y = z % W;
//
//	if (check[x][y]) {
//		return go(z + 1, cnt);
//	}
//	check[x][y] = true;
//    for (int i = 0; i < 4; i++) {
//		if (cover(x, y, i, true)) {
//			ans += go(z + 1, cnt + 1);
//			cover(x, y, i, false);
//		}
//    }
//	check[x][y] = false;
//
//	return ans;
//}
//
//
//
//int main(void) {
//    int T;
//	
//    scanf("%d", &T);
//
//    while (T--) {
//        scanf("%d %d", &H, &W);
//        memset(a, 0, sizeof(a));
//        memset(check, 0, sizeof(check));
//        for (int i = 0; i < H; i++) {
//            scanf("%s", &a[i]);
//            for (int j = 0; j < W; j++) {
//                if (a[i][j] == BLACK) {
//                    check[i][j] = true;
//                }
//            }
//        }
//
//        printf("%d\n", go(0,0));
//    }
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int a[2188][2188];
//int ans[3];
//
//bool same(int x, int y, int n) {
//	for (int i = x; i < x + n; i++) {
//		for (int j = y; j < y + n; j++) {
//			if (a[i][j] != a[x][y]) {
//				return false;
//			}
//		}
//	}
//
//	return true;
//}
//
//void solve(int x, int y, int n) {
//	if (same(x, y, n)) {
//		ans[a[x][y] + 1]++;
//	}
//	else {
//		int m = n / 3;
//		for (int i = 0; i < 3; i++) {
//			for (int j = 0; j < 3; j++) {
//				solve(x + i*m, y + j*m, m);
//			}
//		}
//	}
//}
//
//int main(void) {
//	int n;
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%d", &a[i][j]);
//		}
//	}
//
//	solve(0, 0, n);
//
//	for (int i = 0; i < 3; i++) {
//		printf("%d\n", ans[i]);
//	}
//
//	return 0;
//}
//
////#include <cstdio>
////
////int a[3 * 3 * 3 * 3 * 3 * 3 * 3][3 * 3 * 3 * 3 * 3 * 3 * 3];
////
////int ans_0, ans_1, ans_m1;
////
////void check(int x, int y, int n) {
////    if (n == 1) {
////        if (a[x][y] == -1) {
////            ans_m1++;
////        }
////        else if (a[x][y] == 0) {
////            ans_0++;
////        }
////        else if (a[x][y] == 1) {
////            ans_1++;
////        }
////    }
////    else {
////        int tmp = a[x][y];
////        for (int i = x; i < x + n; i++) {
////            for (int j = y; j < y + n; j++) {
////                
////                if (tmp != a[i][j]) {
////                    for (int ii = x; ii < x + n; ii += (n/3)) {
////                        for (int jj = y; jj < y + n; jj += (n/3)) {
////                            check(ii, jj, n / 3);
////                        }
////                    }
////                    return;
////                }
////
////            }
////        }
////        if (tmp == -1) {
////            ans_m1++;
////        }
////        else if (tmp == 0) {
////            ans_0++;
////        }
////        else if (tmp == 1) {
////            ans_1++;
////        }
////    }
////}
////int main(void) {
////    int n;
////
////    scanf("%d", &n);
////
////    for (int i = 0; i < n; i++) {
////        for (int j = 0; j < n; j++) {
////            scanf("%d", &a[i][j]);
////        }
////    }
////
////    check(0, 0, n);
////
////    printf("%d\n", ans_m1);
////    printf("%d\n", ans_0);
////    printf("%d\n", ans_1);
////
////    return 0;
////}
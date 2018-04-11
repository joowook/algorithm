//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int a[13][20];
//int tmp[13][20];
//int D, W, K;
//
//bool check() {
//	for (int i = 0; i < W; i++) {
//		int t = a[0][i];
//		int cnt = 1;
//
//		for (int j = 1; j < D; j++) {
//			if (a[j][i] == t) {
//				cnt++;
//				if (cnt == K) {
//					break; //이 줄 가능
//				}
//			}
//			else {
//				if (cnt == K) {
//					break;
//				}
//				t = a[j][i];
//				cnt = 1;
//			}
//			
//			if (j == D - 1) {
//				return false;
//			}
//		}
//	}
//	
//	return true;
//}
//
//int main(void) {
//	int T;
//
//	scanf("%d", &T);
//
//	for (int test_case = 1; test_case <= T; test_case++) {
//		scanf("%d %d %d", &D, &W, &K);
//
//		int ans = K;
//
//		for (int i = 0; i < D; i++) {
//			for (int j = 0; j < W; j++) {
//				scanf("%d", &a[i][j]);
//			}
//		}
//		if (check()) {//걍 한번 확인해보고 시작 ~ 되면 0
//			printf("#%d 0\n", test_case);
//			continue;
//		}
//		else {
//			int cnt1 = 0, cnt2 = 0;
//			for (int i = 0; i < D; i++) {
//				vector<int > flag(D);
//				cnt1++;
//				cnt2++;
//				for (int j = D - 1; j > D - 2 - i; j--) {
//					flag[j] = 1;
//				}
//
//				do {
//					for (int ii = 0; ii < D; ii++) { // 0 대입
//						if (flag[ii] == 1) {
//							for (int jj = 0; jj < W; jj++) {
//								tmp[ii][jj] = a[ii][jj];
//								a[ii][jj] = 0;
//							}
//						}
//					}
//
//					if (check()) {
//						ans = ans > cnt1 ? cnt1 : ans;
//					}
//
//					for (int ii = 0; ii < D; ii++) { // 0 대입
//						if (flag[ii] == 1) {
//							for (int jj = 0; jj < W; jj++) {
//								a[ii][jj] = tmp[ii][jj];
//							}
//						}
//					}
//
//					for (int ii = 0; ii < D; ii++) { // 0 대입
//						if (flag[ii] == 1) {
//							for (int jj = 0; jj < W; jj++) {
//								tmp[ii][jj] = a[ii][jj];
//								a[ii][jj] = 1;
//							}
//						}
//					}
//
//					if (check()) {
//						ans = ans > cnt2 ? cnt2 : ans;
//					}
//
//					for (int ii = 0; ii < D; ii++) { // 0 대입
//						if (flag[ii] == 1) {
//							for (int jj = 0; jj < W; jj++) {
//								a[ii][jj] = tmp[ii][jj];
//							}
//						}
//					}
//				} while (next_permutation(flag.begin(), flag.end()));
//			}
//		}
//		printf("#%d %d\n", test_case, ans);
//	}
//
//	return 0;
//}
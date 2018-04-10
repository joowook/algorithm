//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int a[10][10];
//int benefit[10][10];
//int N, M, C;
//int ans;
//
//void go(int x, int y) {
//	if (y + M > N) {
//		return;
//	}
//	
//	int max_sum1 = 0;
//
//	for (int i = 1; i <= M; i++) {
//		vector<int> v(M);
//
//		for (int j = M - 1; j > M - 1 - i; j--) {
//			v[j] = 1;
//		}
//
//		do {
//			int tmp = 0;
//			int sum = 0;
//
//			for (int jj = y; jj < y + M; jj++) {
//				if (v[jj-y] == 1) {
//					tmp += a[x][jj];
//					sum += benefit[x][jj];
//				}
//			}
//			if (tmp <= C) {
//				max_sum1 = max(max_sum1, sum);
//			}
//			
//		} while (next_permutation(v.begin(), v.end()));
//	}
//
//	ans = max(ans, max_sum1);
//
//	y = y + M;
//	if (y + M > N) {
//		x++;
//		if (x == N) {
//			return;
//		}
//		y = 0;
//	}
//
//	int max_sum2 = 0;
//	bool flag = true;
//
//	for (int ii = x; ii < N; ii++) {
//		for (int jj = 0; jj < N; jj++) {
//			if (flag) {
//				if (ii == x) {
//					jj = y;
//				}
//				flag = false;
//			}
//			if (jj + M > N) {
//				break;
//			}
//			for (int i = 1; i <= M; i++) {
//				vector<int> v(M);
//
//				for (int j = M - 1; j > M - 1 - i; j--) {
//					v[j] = 1;
//				}
//
//				do {
//					int tmp = 0;
//					int sum = 0;
//
//					for (int k = jj; k < jj + M; k++) {
//						if (v[k - jj] == 1) {
//							tmp += a[ii][k];
//							sum += benefit[ii][k];
//						}
//					}
//					if (tmp <= C) {
//						max_sum2 = max(max_sum2, sum);
//					}
//
//				} while (next_permutation(v.begin(), v.end()));
//
//				ans = max(ans, max_sum1 + max_sum2);
//			}
//		}
//	}
//
//}
//
//int main(void) {
//	int T;
//
//	scanf("%d", &T);
//
//	for (int test_case = 1; test_case <= T; test_case++) {
//		ans = 0;
//		scanf("%d %d %d", &N, &M, &C); // M 벌통의 수 C 꿀의 최대 양
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				scanf("%d", &a[i][j]);
//				benefit[i][j] = a[i][j] * a[i][j];
//			}
//		}
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				go(i, j); //(i, j) 시작		
//			}
//		}
//
//		printf("#%d %d\n", test_case, ans);
//	}
//
//	return 0;
//}
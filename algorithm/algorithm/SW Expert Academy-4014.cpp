//#include<iostream>
//#include <vector>
//#include <cstdio>
//using namespace std;
//
//int a[21][21];
//int N, X, ans;
//
//void row() {
//	int now = 0;
//	int Cnt = 0;
//	for (int i = 0; i < N; i++) {
//		now = a[i][0];
//		Cnt = 1;
//		for (int j = 1; j < N; j++) {
//			if (a[i][j] == now) {
//				Cnt++;
//			}
//			else if (now > a[i][j]) {
//					if (now - 1 != a[i][j]) {
//						break;
//					}
//
//					int tmp = a[i][j];
//					int cnt = 0;
//					int k = 0;
//					bool flag = true;
//
//					for (k = j; k < j + X; k++) {
//
//						if (k < N) {
//							if (tmp == a[i][k]) {
//								cnt++;
//							}
//							else {
//								flag = false;
//								break;
//							}
//						}
//						else {
//							flag = false;
//							break;
//						}
//					}
//					if (!flag) {
//						break;
//					}
//					if (cnt == X) {
//						if (k - 1 == N - 1) {
//							ans++;
//							continue;
//						}
//
//						j = k - 1;
//						now = a[i][j];
//						Cnt = 0;
//						continue;
//					}
//					
//			}
//			else if (now < a[i][j]) {
//				if (now + 1 != a[i][j]) {
//					break;
//				}
//
//				if (Cnt < X) {
//					break;
//				}
//				else {
//					now = a[i][j];
//					Cnt = 1;
//				}
//			}
//
//			if (j == N - 1) {
//				ans++;
//			}
//		}
//	}
//}
//
//void column() {
//	int now = 0;
//	int Cnt = 0;
//	for (int i = 0; i < N; i++) {
//		now = a[0][i];
//		Cnt = 1;
//		for (int j = 1; j < N; j++) {
//			if (a[j][i] == now) {
//				Cnt++;
//			}
//			else if (now > a[j][i]) {
//				if (now - 1 != a[j][i]) {
//					break;
//				}
//
//				int tmp = a[j][i];
//				int cnt = 0;
//				int k = 0;
//				bool flag = true;
//
//				for (k = j; k < j + X; k++) {
//
//					if (k < N) {
//						if (tmp == a[k][i]) {
//							cnt++;
//						}
//						else {
//							flag = false;
//							break;
//						}
//					}
//					else {
//						flag = false;
//						break;
//					}
//				}
//				if (!flag) {
//					break;
//				}
//				if (cnt == X) {
//					if (k - 1 == N - 1) {
//						ans++;
//						continue;
//					}
//					j = k - 1;
//					now = a[j][i];
//					Cnt = 0;
//					continue;
//				}
//			}
//			else if (now < a[j][i]) {
//				if (now + 1 != a[j][i]) {
//					break;
//				}
//
//				if (Cnt < X) {
//					break;
//				}
//				else {
//					now = a[j][i];
//					Cnt = 1;
//				}
//			}
//
//			if (j == N - 1) {
//				ans++;
//			}
//		}
//	}
//}
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T;
//	
//	scanf("%d", &T);
//
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		scanf("%d %d", &N, &X); // 6<= N <=20 , 2<=X<=4
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				scanf("%d", &a[i][j]); // 1 <= a[i][j] <= 6
//			}
//		}
//
//		ans = 0;
//		row();
//		column();
//
//		printf("#%d %d\n", test_case, ans);
//	}
//	return 0;
//}

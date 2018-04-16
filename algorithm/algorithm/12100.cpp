//#include <iostream>
//using namespace std;
//
//int a[20][20];
//int tmp[20][20];
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//int N;
//
//void move(int direction) {
//	if (direction == 0) {
//		for (int j = 0; j < N; j++) {
//			int zero = 0;
//			for (int i = 0; i < N; i++) {
//				if (a[i][j] == 0) {
//					zero++;
//				}
//				else {
//					a[i - zero][j] = a[i][j];
//
//				}
//			}
//
//			for (int i = N - zero; i < N; i++) {
//				a[i][j] = 0;
//			}
//		}
//		for (int j = 0; j < N; j++) {
//			int tmp = 0;
//			for (int i = 0; i < N - 1; i++) {
//				if (a[i][j] != 0 && a[i][j] == a[i + 1][j]) {
//					a[i - tmp][j] = a[i][j] * 2;
//					tmp++;
//					i++;
//				}
//				else {
//					if (a[i][j] == 0) {
//						tmp++;
//						
//					}
//
//					if (a[i][j] != a[i + 1][j]) {
//						a[i - tmp][j] = a[i][j];
//					}
//				}
//				
//			}
//
//			for (int i = N - tmp - 1; i < N; i++) {
//				a[i][j] = 0;
//			}
//		}
//	}
//	else if (direction == 1) {
//		for (int j = 0; j < N; j++) {
//			int zero = 0;
//			for (int i = N - 1; i >= 0; i--) {
//				if (a[i][j] == 0) {
//					zero++;
//				}
//				else {
//					a[i + zero][j] = a[i][j];
//
//				}
//			}
//
//			for (int i = 0; i < zero; i++) {
//				a[i][j] = 0;
//			}
//		}
//		for (int j = 0; j < N; j++) {
//			int tmp = 0;
//			for (int i = N-1; i > 0 ; i--) {
//				if (a[i][j] != 0 && a[i][j] == a[i - 1][j]) {
//					a[i + tmp][j] = a[i][j] * 2;
//					tmp++;
//					i--;
//				}
//				else {
//					if (a[i][j] == 0) {
//						tmp++;
//						
//					}
//
//					if (a[i][j] != a[i - 1][j]) {
//						a[i + tmp][j] = a[i][j];
//
//					}
//				}
//			}
//
//			for (int i = 0; i < tmp + 1; i++) {
//				a[i][j] = 0;
//			}
//		}
//	}
//	else if (direction == 2) {
//		for (int j = 0; j < N; j++) {
//			int zero = 0;
//			for (int i = 0; i < N; i++) {
//				if (a[j][i] == 0) {
//					zero++;
//				}
//				else {
//					a[j][i - zero] = a[j][i];
//
//				}
//			}
//
//			for (int i = N - zero; i < N; i++) {
//				a[j][i] = 0;
//			}
//		}
//		for (int j = 0; j < N; j++) {
//			int tmp = 0;
//			for (int i = 0; i < N - 1; i++) {
//				if (a[j][i] != 0 && a[j][i] == a[j][i + 1]) {
//					a[j][i - tmp] = a[j][i] * 2;
//					tmp++;
//					i++;
//				}
//				else {
//					if (a[j][i] == 0) {
//						tmp++;
//						
//					}
//
//					if (a[j][i] != a[j][i + 1]) {
//						a[j][i - tmp] = a[j][i];
//					}
//				}
//
//			
//			}
//
//			for (int i = N - tmp - 1; i < N; i++) {
//				a[j][i] = 0;
//			}
//		}
//	}
//	else if (direction == 3) {
//		for (int j = 0; j < N; j++) {
//			int zero = 0;
//			for (int i = N - 1; i >= 0; i--) {
//				if (a[j][i] == 0) {
//					zero++;
//				}
//				else {
//					a[j][i + zero] = a[j][i];
//
//				}
//			}
//
//			for (int i = 0; i < zero; i++) {
//				a[j][i] = 0;
//			}
//		}
//		for (int j = 0; j < N; j++) {
//			int tmp = 0;
//			for (int i = N - 1; i > 0; i--) {
//				if (a[j][i] != 0 && a[j][i] == a[j][i - 1]) {
//					a[j][i + tmp] = a[j][i] * 2;
//					tmp++;
//					i--;
//				}
//				else {
//					if (a[j][i] == 0) {
//						tmp++;
//					}
//					else if (a[j][i] != a[j][i-1]) {
//						a[j][i + tmp] = a[j][i];
//					}
//				}
//			}
//
//			for (int i = 0; i < tmp + 1; i++) {
//				a[j][i] = 0;
//			}
//		}
//	}
//}
//
//
//
//int main(void) {
//	scanf("%d", &N);
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			scanf("%d", &a[i][j]);
//			tmp[i][j] = a[i][j];
//		}
//	}
//	int ans = 0;
//
//
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			for (int k = 0; k < 4; k++) {
//				for (int ii = 0; ii < 4; ii++) {
//					for (int jj = 0; jj < 4; jj++) {
//						int cnt = 0;
//
//						for (int iii = 0; iii < N; iii++) {
//							for (int jjj = 0; jjj < N; jjj++) {
//								a[iii][jjj] = tmp[iii][jjj];
//							}
//						}
//
//						move(i);
//						move(j);
//						move(k);
//						move(ii);
//						move(jj);
//
//						for (int iii = 0; iii < N; iii++) {
//							for (int jjj = 0; jjj < N; jjj++) {
//								if (a[iii][jjj] > cnt) {
//									cnt = a[iii][jjj];
//								}
//							}
//						}
//						ans = ans >= cnt ? ans : cnt;
//					}
//				}
//			}
//		}
//	}
//
//	
//	printf("%d\n", ans);
//
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//#define N 0
//#define S 1
//#define RIGHT 1
//#define LEFT -1
//
//int magnet[5][9];
//
//void rotation(int n, int direction) {
//	int tmp;
//	
//	if (direction == RIGHT) {
//		tmp = magnet[n][8];
//		for (int i = 8; i >= 2; i--) {
//			magnet[n][i] = magnet[n][i - 1];
//		}
//		magnet[n][1] = tmp;
//
//	}
//	else if (direction == LEFT) {
//		tmp = magnet[n][1];
//
//		for (int i = 2; i <= 8; i++) {
//			magnet[n][i - 1] = magnet[n][i];
//		}
//		magnet[n][8] = tmp;
//	}
//}
//
//int main(void) {
//	int T;
//
//	scanf("%d", &T);
//
//	for (int tc = 1; tc <= T; tc++) {
//		int ans = 0;
//
//		int K;
//	
//		scanf("%d", &K);
//
//		for (int i = 1; i <= 4; i++) {
//			for (int j = 1; j <= 8; j++) {
//				scanf("%d", &magnet[i][j]);
//			}
//		}
//
//		for (int i = 0; i < K; i++) {
//			int n, direction;
//
//			scanf("%d %d", &n, &direction);
//
//			if (n == 1) {
//				if (magnet[1][3] != magnet[2][7]) {
//					if (magnet[2][3] != magnet[3][7]) {
//						if (magnet[3][3] != magnet[4][7]) {
//							rotation(4, -direction);
//						}
//						rotation(3, direction);
//					}
//					rotation(2, -direction);
//				}
//				rotation(1, direction);
//			}
//			else if (n == 2) {
//				if (magnet[2][7] != magnet[1][3]) {
//					rotation(1, -direction);
//				}
//				if (magnet[2][3] != magnet[3][7]) {
//					if (magnet[3][3] != magnet[4][7]) {
//						rotation(4, direction);
//					}
//					rotation(3, -direction);
//				}
//				rotation(2, direction);
//			}
//			else if (n == 3) {
//				if(magnet[3][7] != magnet[2][3]) {
//					if (magnet[2][7] != magnet[1][3]) {
//						rotation(1, direction);
//					}
//					rotation(2, -direction);
//				}
//				if (magnet[3][3] != magnet[4][7]) {
//					rotation(4, -direction);
//				}
//				rotation(3, direction);
//			}
//			else if (n == 4) {
//				if (magnet[4][7] != magnet[3][3]) {
//					if (magnet[3][7] != magnet[2][3]) {
//						if (magnet[2][7] != magnet[1][3]) {
//							rotation(1, -direction);
//						}
//						rotation(2, direction);
//					}
//					rotation(3, -direction);
//				}
//				rotation(4, direction);
//			}
//		}
//
//		int score = 1;
//		for (int i = 1; i <= 4; i++) {
//			ans += magnet[i][1]*score;
//			score *= 2;
//		}
//
//		printf("#%d %d\n", tc, ans);
//	}
//
//	return 0;
//}
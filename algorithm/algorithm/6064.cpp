//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int M, N, x, y;
//
//bool prev(int n) {
//	for (int i = 1; i <= n; i++) {
//		int xx = i%M;
//		int yy = i%N;
//
//		if (xx == 0) {
//			xx = M;
//		}
//		if (yy == 0) {
//			yy = N;
//		}
//		if (xx == x) {
//			if (yy == y) {
//				printf("%d\n", i);
//				return false;
//			}
//		}
//	}
//	return true;
//}
//int main(void) {
//	int T;
//
//	scanf("%d", &T);
//
//	while (T--) {
//		scanf("%d %d %d %d", &M, &N, &x, &y);;
//		
//		bool flag = true;
//		int n = max(M, N);
//
//		if (prev(n)) {
//			for (int i = 1; i * M + x <= M*N; i++) {
//				int tmp = i * M + x;
//				if (tmp %N == 0) { // M, N 이 0이 될 수 도있음 처리해줘야함
//					if (N == y) {
//						printf("%d\n", tmp);
//						flag = false;
//						break;
//					}
//				}
//				else if (tmp % N == y) {
//					printf("%d\n", tmp);
//					flag = false;
//					break;
//				}
//			}
//
//			if (flag) {
//				printf("-1\n");
//			}
//		}
//	}
//
//	return 0;
//}
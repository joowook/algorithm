#include <iostream>
//#include <vector>
//using namespace std;
//
//int sum[1001];
//
//int main(void) {
//	int T;
//
//	scanf("%d", &T);
//
//	while (T--) {
//		int N, L;
//
//		scanf("%d %d", &N, &L);
//
//		sum[0] = 0;
//		vector<int> a(N + 1);
//		for (int i = 1; i <= N; i++) {
//			scanf("%d", &a[i]);
//			sum[i] = sum[i - 1] + a[i];
//		}
//
//		double ans = 1000000000;
//		for (int i = 0; i <= N; i++) {
//			for (int j = i + L; j <= N; j++) {
//				if ((double)(sum[j]-sum[i]) / (j-i) < ans) {
//					ans = (double)(sum[j]-sum[i]) / (j-i);
//				}
//			}
//		}
//		
//		printf("%.11f\n", ans);
//	}
//
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//int a[2000000];
//
//int main(void) {
//	int N, L, D;
//
//	scanf("%d %d %d", &N, &L, &D);
//	int tmp = 0;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < L; j++) {
//			a[i * L + j + tmp] = 1;
//		}
//		tmp += 5;
//	}
//
//	tmp = D;
//	int ans = 0;
//
//	while (true) {
//		if (a[tmp] == 0) {
//			ans = tmp;
//			break;
//		}
//		tmp += D;
//	}
//
//	printf("%d\n", ans);
//
//	return 0;
//}
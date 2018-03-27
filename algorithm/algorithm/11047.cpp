//#include <iostream>
//using namespace std;
//
//int a[10];
//
//int main(void) {
//	int n, k;
//
//	scanf("%d %d", &n, &k);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//
//	int ans = 0;
//	for (int i = n - 1; i >= 0; i--) {
//		ans += k / a[i];
//		k %= a[i];
//	}
//
//	printf("%d\n", ans);
//
//	return 0;
//}
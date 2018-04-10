//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(void) {
//	int N;
//
//	scanf("%d", &N);
//
//	vector<int> a(N);
//
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &a[i]);
//	}
//
//	int B, C;
//
//	scanf("%d %d", &B, &C);
//
//	long long ans = 0;
//
//	for (int i = 0; i < N; i++) {
//		if (a[i] <= B) {
//			ans++;
//			continue;
//		}
//		else {
//			a[i] -= B;
//			ans++;
//
//			int moc = a[i] / C;
//			int nam = a[i] % C;
//			if (nam != 0) {
//				moc++;
//			}
//
//			ans += moc;
//		}
//	}
//
//	printf("%lld\n", ans);
//
//	return 0;
//}
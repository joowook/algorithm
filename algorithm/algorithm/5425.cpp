//#include <iostream>
//#include <cmath>
//using namespace std;
//
//long long sum[200];
//
//int main(void) {
//	int T, nam, x;
//	long long tmp;
//	long long n;
//	scanf("%d", &T);
//
//	sum[0] = 45;
//	for (int i = 1; i <= 140; i++) {
//		if (i % 10 == 0) {
//			sum[i] = sum[i - 1];
//			continue;
//		}
//		else if (i % 10 == 1) {
//			n = i / 10;
//			tmp = 10;
//			for (int j = 0; j < n; j++) {
//				tmp *= 10;
//			}
//			x = (i / 10) * 10;
//		}
//
//		nam = i % 10;
//
//		sum[i] = sum[i - 1] + nam * tmp + sum[x];
//	}
//
//	
//	while (T--) {
//		long long ans_a = 0, ans_b = 0;
//		long long a, b;
//
//		scanf("%lld %lld", &a, &b);
//
//		
//		int top = 0;
//		x = 0;
//
//		while (a != 0) {
//			if (a < 10) {
//				for (int i = 1; i < a; i++) {
//					ans_a += i;
//				}
//				break;
//			}
//
//			long long temp = a;
//			int cnt = 0;
//			while (temp != 0) {
//				if (temp < 10) {
//					top = (int)temp;
//				}
//				temp /= 10;
//
//				cnt++;
//			}
//			n = 1;
//			for (int i = 0; i < cnt - 1; i++) {
//				n *= 10;
//			}
//
//			a = a - top *n;
//			x = (cnt - 2) * 10 + top - 1;
//			ans_a += (sum[x] + a * top);
//		}
//		
//		while (b != 0) {
//			if (b < 10) {
//				for (int i = 1; i <= b; i++) {
//					ans_b += i;
//				}
//				break;
//			}
//			long long temp = b;
//			int cnt = 0;
//			while (temp != 0) {
//				if (temp < 10) {
//					top = (int)temp;
//				}
//				temp /= 10;
//
//				cnt++;
//			}
//			n = 1;
//			for (int i = 0; i < cnt - 1; i++) {
//				n *= 10;
//			}
//
//			b = b - top *n;
//			x = (cnt - 2) * 10 + top - 1;
//			ans_b += sum[x] + (b+1) * top;
//		}
//
//		printf("%lld\n", ans_b - ans_a);
//	}
//
//	return 0;
//}
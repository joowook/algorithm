//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int a[8001];
//int main(void) {
//	int N;
//
//	scanf("%d", &N);
//
//	vector<int> v;
//
//	double sum = 0;
//	for (int i = 0; i < N; i++) {
//		int x;
//		scanf("%d", &x);
//		v.push_back(x);
//		a[4000 + x]++;
//		sum += x;
//	}
//
//	sort(v.begin(), v.end());
//	int ans = 0;
//	double n = (double)N / 2;
//	if (sum >= 0) {
//		ans = (int)(sum + n) / N;
//	}
//	else {
//		ans = (int)(sum - n) / N;
//	}
//	//Æò±Õ
//	printf("%d\n", ans);
//
//	//Áß¾Ó°ª
//	printf("%d\n", v[(N - 1) / 2]);
//
//	//ÃÖºó°ª
//	int Max = 0;
//	for (int i = 0; i <= 8000; i++) {
//		if (Max < a[i]) {
//			Max = a[i];
//		}
//	}
//	int cnt = 0;
//	bool flag = true;
//	int ii= 0;
//	for (int i = 0; i <= 8000; i++) {
//		if (Max == a[i]) {
//			cnt++;
//			ii = i;
//			if (cnt == 2) {
//				printf("%d\n", i - 4000);
//				flag = false;
//				break;
//			}
//		}
//	}
//
//	if (flag) {
//		printf("%d\n", ii-4000);
//	}
//
//	//¹üÀ§
//	printf("%d\n", v[N - 1] - v[0]);
//
//	return 0;
//}
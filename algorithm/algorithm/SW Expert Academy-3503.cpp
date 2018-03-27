//#include<iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
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
//		int n;
//
//		scanf("%d", &n);
//
//		vector<int> a(n);
//
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &a[i]);
//		}
//
//		sort(a.begin(), a.end());
//		reverse(a.begin(), a.end());
//
//		vector<int> left, right;
//
//		right.push_back(a[0]);
//
//		for (int i = 1; i < n; i += 2) {
//			if (i == n - 1 && n % 2 == 0) {
//				right.push_back(a[i]);
//				break;
//			}
//
//			if (a[i] < a[i + 1]) {
//				left.push_back(a[i + 1]);
//				right.push_back(a[i]);
//			}
//			else {
//				right.push_back(a[i + 1]);
//				left.push_back(a[i]);
//			}
//		}
//		int ans = 0;
//		for (int i = 0; i < left.size() - 1; i++) {
//			int tmp = left[i] - left[i + 1];
//			if (ans < tmp) {
//				ans = tmp;
//			}
//		}
//		for (int i = 0; i < right.size() - 1; i++) {
//			int tmp = right[i] - right[i + 1];
//			if (ans < tmp) {
//				ans = tmp;
//			}
//		}
//		if (ans < right[0] - left[0]) {
//			ans = right[0] - left[0];
//		}
//
//		if (ans < left[left.size() - 1] - right[right.size() - 1]) {
//			ans = left[left.size() - 1] - right[right.size() - 1];
//		}
//
//		printf("#%d %d\n", test_case, ans);
//	}
//	return 0;
//}
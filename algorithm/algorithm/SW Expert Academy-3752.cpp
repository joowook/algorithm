//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//#define MAX 10000
//int a[100];
//int ls[MAX+1];
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T;
//	
//	cin >> T;
//
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		int n; 
//		cin >> n;
//		vector<int> b(n);
//		memset(a, 0, sizeof(a));
//		memset(ls, 0, sizeof(ls));
//		ls[0] = 1;
//
//		for (int i = 0; i < n; i++) {
//			cin >> a[i];
//		}
//
//		for (int i = 1; i <= n; i++) {
//			for (int j = 0; j < n - i; j++) {
//				b[j] = 0;
//			}
//			for (int j = b.size() - i; j < n; j++) {
//				b[j] = 1;
//			}
//
//			do {
//				int sum = 0;
//
//				for (int k = 0; k < n; k++) {
//					if (b[k] == 1) {
//						sum += a[k];
//					}
//				}
//
//				if (ls[sum] == 0) {
//					ls[sum] = sum;
//				}
//
//			} while (next_permutation(b.begin(), b.end()));
//		}
//
//		int ans = 0;
//
//		for (int i = 0; i < MAX + 1; i++) {
//			if (ls[i] > 0) {
//				ans += 1;
//			}
//		}
//
//		cout << "#" <<test_case << " " << ans << '\n';
//	}
//	return 0;
//}
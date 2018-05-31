//#include<iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//#define MAX 2000000000
//#define MIN (-2000000000)
//
//int cal[4];
//int a[12];
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
//		int N;
//
//		cin >> N;
//		vector<int> v;
//
//		for (int i = 0; i < 4; i++) { // + - * /
//			cin >> cal[i];
//			for (int j = 0; j < cal[i]; j++) {
//				v.push_back(i);
//			}
//		}
//
//		for (int i = 0; i < N; i++) {
//			cin >> a[i];
//		}
//
//		int high = MIN;
//		int low = MAX;
//		do {
//			int tmp = a[0];
//			for (int i = 1; i < N; i++) {
//				if (v[i - 1] == 0) {
//					tmp += a[i];
//				}
//				else if (v[i - 1] == 1) {
//					tmp -= a[i];
//				}
//				else if (v[i - 1] == 2) {
//					tmp *= a[i];
//				}
//				else if (v[i - 1] == 3) {
//					tmp /= a[i];
//				}
//			}
//
//			high = max(high, tmp);
//			low = min(low, tmp);
//		} while (next_permutation(v.begin(), v.end()));
//
//		cout << "#" << test_case << " " << high - low << '\n';
//
//	}
//	return 0;
//}
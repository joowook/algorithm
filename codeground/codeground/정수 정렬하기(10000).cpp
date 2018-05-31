//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int Answer;
//
//int main(int argc, char** argv)
//{
//	int T, test_case;
//
//	cin >> T;
//
//	for (test_case = 0; test_case < T; test_case++)
//	{
//		int N;
//
//		cin >> N;
//
//		vector<int> a(N);
//		Answer = 0;
//
//		for (int i = 0; i < N; i++) {
//			cin >> a[i];
//		}
//
//		sort(a.begin(), a.end());
//
//		for (int i = 0; i < N; i++) {
//			if (i % 2 == 0) {
//				Answer += a[i];
//			}
//			else {
//				Answer -= a[i];
//			}
//		}
//
//		cout << "Case #" << test_case + 1 << endl;
//		cout << Answer << endl;
//	}
//
//	return 0;
//}
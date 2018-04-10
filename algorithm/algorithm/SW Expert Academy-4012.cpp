//#include<iostream>
//#include <algorithm>
//#include <vector>
//#define MAX 2000000000
//using namespace std;
//
//int a[17][17];
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
//		int N, ans = MAX;
//
//		cin >> N;
//	
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				cin >> a[i][j];
//			}
//		}
//
//		vector<int> s(N);
//		for (int i = N / 2; i < N; i++) {
//			s[i] = 1;
//		}
//
//		int cnt = 0;
//		do {
//			int sum1 = 0, sum2= 0;
//			vector<int> food1, food2;
//			for (int i = 0; i < N; i++) {
//				if (s[i] == 0) {
//					food1.push_back(i);
//				}
//				else {
//					food2.push_back(i);
//				}
//			}
//
//			for (int i = 0; i < N / 2; i++) {
//				for (int j = 0; j < N / 2; j++) {
//					sum1 += a[food1[i]][food1[j]];
//					sum2 += a[food2[i]][food2[j]];
//				}
//			}
//			int tmp = 0;
//			
//			tmp = sum1 > sum2 ? sum1 - sum2 : sum2 - sum1;
//
//			ans = min(ans, tmp);
//		} while (next_permutation(s.begin(), s.end()));
//	
//		cout << "#"<<test_case << " "<<ans << '\n';
//	}
//
//
//	return 0;
//}
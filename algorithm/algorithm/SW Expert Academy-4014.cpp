//#include<iostream>
//#include <stack>
//#include <cstdio>
//using namespace std;
//
//int a[21][21];
//int N, X, ans;
//
//void row() {
//	int now = 0;
//	stack<int> s;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (j == 0) {
//				now = a[i][j];
//				s.push(now);
//				continue;
//			}
//
//			if (a[i][j] == now) {
//				s.push(now);
//			}
//			else {
//				if (now > a[i][j]) {
//					if (now - 1 != a[i][j]) {
//						break;
//					}
//					
//					
//				}
//				else if (now < a[i][j]) {
//					if (now + 1 != a[i][j]) {
//						break;
//					}
//
//					if (s.size() < X) {
//						break;
//					}
//					else {
//						s.empty();
//						now = a[i][j];
//						s.push(now);
//					}
//				}
//			}
//
//			if (j == N - 1) {
//				ans++;
//			}
//
//		}
//	}
//}
//
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
//		scanf("%d %d", &N, &X); // 6<= N <=20 , 2<=X<=4
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				scanf("%d", &a[i][j]); // 1 <= a[i][j] <= 6
//			}
//		}
//
//		row();
//	
//
//	
//
//
//
//	}
//	return 0;
//}

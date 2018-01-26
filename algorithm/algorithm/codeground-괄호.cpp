//#include <iostream>
//#include <stack>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int ans;
//string a;
//
//bool IsMatch(char x, char y)
//{
//	if (x == '(' && y == ')') return true;
//	if (x == '{' && y == '}') return true;
//	if (x == '[' && y == ']') return true;
//	return false;
//}
//
//int main(int argc, char** argv)
//{
//	int T, test_case;
//
//	cin >> T;
//	for (test_case = 0; test_case < T; test_case++)
//	{
//		cin >> a;
//
//		stack<int> s;
//		int ans = 0;
//		int n = a.size();
//		int sc = -1;
//
//		for (int i = 0; i < n; i++) {
//			if (a[i] == '(' || a[i] == '{' || a[i] == '[') {
//				s.push(i);
//
//				if (sc == -1) {
//					sc = i;
//				}
//			}
//			else {
//				if (!s.empty() && IsMatch(a[s.top()], a[i])) {
//					
//					s.pop();
//				
//					if (s.empty()) {
//						ans = max(ans, i - sc + 1);
//					}
//					else {
//						ans = max(ans, i - s.top());
//					}
//				}
//				else {
//					s = stack<int>();
//					sc = -1;
//				}
//			}
//		}
//		cout << "Case #" << test_case + 1 << endl;
//		cout << ans << endl;
//	}
//
//	return 0;
//}
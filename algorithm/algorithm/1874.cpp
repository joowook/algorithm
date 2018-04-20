//#include <iostream>
//#include <vector>
//#include <stack>
//#include<string>
//using namespace std;
//
//int main(void) {
//	int n;
//
//	string ans = "";
//	scanf("%d", &n);
//
//	vector<int> v(n);
//
//	for (int t = 0; t < n; t++) {
//		scanf("%d", &v[t]);
//	}
//
//	stack<int>s;
//
//	int now = v[0];
//	for (int j = 1; j <= now; j++) {
//		s.push(j);
//		ans += '+';
//	}
//	s.pop();
//	ans += '-';
//
//	for (int i = 1; i < n; i++) {
//		while (v[i] > now) {
//			s.push(++now);
//			ans += '+';
//		}
//
//		if (v[i] < now) {
//			if (s.top() == v[i]) {
//				ans += '-';
//				s.pop();
//			}
//			else {
//				printf("NO\n");
//
//				return 0;
//			}
//		}
//
//		if (v[i] == now) {
//			ans += '-';
//			s.pop();
//		}
//	}
//
//	for (int i = 0; i < (int)ans.size(); i++) {
//		printf("%c\n", ans[i]);
//	}
//
//	return 0;
//}